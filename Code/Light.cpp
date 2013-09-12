//
//  Light.cpp
//  LightGameXCode
//
//  Created by Chris Rice on 9/12/13.
//  Copyright (c) 2013 Chris Rice. All rights reserved.
//
#include "Light.h"

using namespace std;

Light::Light() {
	xdir = 1;
	ydir = 0;
    
    GridSquare g(0,0,0);
    beam.push_back(g);
}

void Light::propogate() {
    // check next gridspace function
    GridSquare g(beam.back().getX() + xdir, beam.back().getY() + ydir, 0);
    beam.push_back(g);
    
}

void Light::displayLight() {
    cout << "Light: " << endl;
    for (int i = 0; i < beam.size(); i++){
        cout << "X: " << beam.at(i).getX() << ", Y: " << beam.at(i).getY() << endl;
    }
}