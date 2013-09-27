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
    
    GridSquare g(1,3,4);
    beam.push_back(g);
}

void Light::propogate(Map map) {
    // check next gridspace function
    int x = beam.back().getX();
    int y = beam.back().getY();
    GridSquare g(beam.back().getX() + xdir, beam.back().getY() + ydir, 1);

    if (ydir ==1){
        g.setType(5);
    }
    else if (xdir == 1){
        g.setType(4);
    }

    
    if (map.getSquare(x+xdir,y+ydir).getType() == 0 ){
        cout << "Emptiness!";
        beam.push_back(g);
    }
    else if (map.getSquare(x+xdir,y+ydir).getType() == 2 ){
        cout << "There's a wall\n";
        
    }
    else if (map.getSquare(x+xdir,y+ydir).getType() == 3){
        x += xdir;
        y += ydir;
        GridSquare a(x,y, g.getType());
        beam.push_back(a);
        
        xdir = rand()%2;
        ydir = rand()%2;

        
        while (xdir == ydir){
            xdir = rand()%2;
            ydir = rand()%2;
        }

        cout << "New xdir = " << xdir;
        cout << "New ydir = " << ydir;
        
        cout << "There's a mirror\n";
    }
    
}

int Light::getSpriteDirection(int index){
    if (beam.at(index).getType() == 4){
        return 1;
    }
    else {
        return 2;
    }
}

void Light::displayLight() {
    cout << "Light: " << endl;
    for (int i = 0; i < beam.size(); i++){
        cout << "X: " << beam.at(i).getX() << ", Y: " << beam.at(i).getY() << endl;
    }
}