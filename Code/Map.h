//
//  Map.h
//  emptyExample
//
//  Created by Chris Rice on 9/19/13.
//
//

#ifndef emptyExample_Map_h
#define emptyExample_Map_h
#include "GridSquare.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Map {
public:
    Map() {;}
    Map(string name, string filename);
    void printGrid();
    GridSquare getSquare(int x, int y) {return grid[x][y];}
    int getXSize() {return X_SIZE;}
    int getYSize() {return Y_SIZE;}
    
    const static int X_SIZE = 10;
    const static int Y_SIZE = 10;
private:
    string name;
    
    int x, y;
    
    GridSquare grid[X_SIZE][Y_SIZE];
};

#endif
