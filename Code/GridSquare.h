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
    GridSquare(int x, int y, int type) { this->x = x, this->y =y, this->type = type;}
    
	int getX() { return x;}
	int getY() { return y;}
    
	void setType(int type){ this->type = type;}
	int getType() {return type;}
    
    const static int WIDTH = 20;
	const static int HEIGHT = 20;
    
private:
    int x,y;
	int type; // 0 = blank, 1 = light, 2 = wall, 3 = mirror
};


#endif
