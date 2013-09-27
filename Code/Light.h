//
//  Light.h
//  LightGameXCode
//
//  Created by Chris Rice on 9/12/13.
//  Copyright (c) 2013 Chris Rice. All rights reserved.
//

#ifndef LightGameXCode_Light_h
#define LightGameXCode_Light_h

#include "Light.h"
#include "GridSquare.h"
#include "Map.h"
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;
class Light {
public:
	Light();
	void propogate(Map map);
    void displayLight();
    int getSize() {return beam.size();}
    int getSpriteDirection(int index);
    GridSquare getSquare(int index) {return beam.at(index);}
    
private:
    int xdir, ydir;
	vector<GridSquare> beam;
};

#endif
