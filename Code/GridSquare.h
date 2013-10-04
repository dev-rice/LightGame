//
//  GridSquare.h
//  LightGameXCode
//
//  Created by Chris Rice on 9/12/13.
//  Copyright (c) 2013 Chris Rice. All rights reserved.
//

#ifndef LightGameXCode_GridSquare_h
#define LightGameXCode_GridSquare_h

#include <cstdlib>

class GridSquare {
public:
    GridSquare() {;}
    GridSquare(int x, int y) { this->x = x, this->y =y;}
    
	int getX() { return x;}
	int getY() { return y;}
    
    bool isEmpty() { return is_empty;}
    bool isWall() { return is_wall;}
    bool isMirror() { return is_mirror;}
    bool isLight() { return is_light;}
    
    const static int SIZE = 32;
    
protected:
    int x,y;
    
    bool is_blank = false;
    bool is_empty = false;
    bool is_wall = false;
    bool is_mirror = false;
    bool is_light = false;
    
};


#endif
