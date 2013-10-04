//
//  MirrorSquare.h
//  LightGame
//
//  Created by Chris Rice on 10/3/13.
//
//

#ifndef LightGame_MirrorSquare_h
#define LightGame_MirrorSquare_h

#include "GridSquare.h"

class MirrorSquare : public GridSquare {
public:
    MirrorSquare(int x, int y) : GridSquare (x,y) { is_mirror = true;}
    
private:
    
};

#endif
