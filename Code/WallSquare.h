//
//  WallSquare.h
//  LightGame
//
//  Created by Chris Rice on 9/27/13.
//
//

#ifndef LightGame_WallSquare_h
#define LightGame_WallSquare_h

#include "GridSquare.h"

class WallSquare : public GridSquare {
public:
        WallSquare(int x, int y) : GridSquare (x,y) { is_wall = true;}
    
private:
    
};

#endif
