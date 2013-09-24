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
    GridSquare(int x, int y, short type) { this->x = x, this->y =y, this->type = type;}
    
	int getX() { return x;}
	int getY() { return y;}
    
	void setType(short type){ this->type = type;}
	short getType() {return type;}
private:
    int x,y;
	short type; // 0 = blank, 1 = light, 2 = mirror
    
	const static int WIDTH = 40;
	const static int HEIGHT = 30;
};


#endif
