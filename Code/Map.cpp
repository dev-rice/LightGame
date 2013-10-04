//
//  Map.cpp
//  emptyExample
//
//  Created by Chris Rice on 9/19/13.
//
//

#include "Map.h"
#include "EmptySquare.h"
#include "WallSquare.h"
#include "MirrorSquare.h"
#include "LightSquare.h"

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

Map::Map(string name, string filename){
    int type;
    
    x = 0;
    y = 0;
    
    ifstream file(filename.c_str());
    
    if (!file){
        //not open;
        cout << "File not found";
    }
    while (file >> type){
        GridSquare* g;
        switch(type){
            case 0:
                g = new EmptySquare(x,y);
                break;
            case 1:
                g = new WallSquare(x,y);
                break;
            case 2:
                g = new MirrorSquare(x,y);
                break;
            case 3:
                g = new LightSquare(x,y);
                break;
        }
        
        grid[x][y] = g;
        
        ++x;
        
        if (x == X_SIZE){
            ++y;
            x=0;
        }
        
    }
}

void Map::printGrid() {
    for (int column = 0; column < X_SIZE; ++column){
        for (int row = 0; row < Y_SIZE; row++) {
            GridSquare* g = grid[row][column];
            
            if (g->isEmpty()){
                cout << "E ";
            }
            else if (g->isWall()){
                cout << "W ";
            }
            else if (g->isMirror()){
                cout << "M ";
            }
            else if (g->isLight()){
                cout << "L ";
            }
            else {
                cout << "U ";
            }
        }
        cout << endl;
    }
}