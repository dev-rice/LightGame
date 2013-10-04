//
//  LightSquare.h
//  LightGame
//
//  Created by Chris Rice on 10/3/13.
//
//

#ifndef LightGame_LightSquare_h
#define LightGame_LightSquare_h

#include "GridSquare.h"

class LightSquare : public GridSquare {
public:
    LightSquare(int x, int y) : GridSquare (x,y) { is_light = true;}
    
private:
};


#endif
