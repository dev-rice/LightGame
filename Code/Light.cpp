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
    
    srand(time(NULL));
    
    //GridSquare g(1,3,4);
    ///beam.push_back(g);
}

void Light::propogate(Map map) {
    // check next gridspace function
    int x = beam.back().getX();
    int y = beam.back().getY();
    GridSquare g(beam.back().getX() + xdir, beam.back().getY() + ydir);

    if (ydir ==1){
        //g.setType(5);
    }
    else if (xdir == 1){
        //g.setType(4);
    }
    
}