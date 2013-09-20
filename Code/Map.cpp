//
//  Map.cpp
//  emptyExample
//
//  Created by Chris Rice on 9/19/13.
//
//

#include "Map.h"
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
        
        GridSquare g(x,y,type);
        grid[x][y] = g;
        
        ++x;
        
        if (x == X_SIZE){
            ++y;
            x=0;
            cout << "\n";
        }
    
        
        
        //cout << " X: " << x << ", Y: " << y << "\n";
    }
}

void Map::printGrid() {
    for (int j = 0; j < X_SIZE; ++j){
        for (int i = 0; i < Y_SIZE; ++i){
            cout << " X: " << grid[i][j].getX() << ", Y: " << grid[i][j].getY() <<" type: " << grid[i][j].getType() <<"\n";
        }
    }
}