//
//  EmptySquare.h
//  LightGame
//
//  Created by Chris Rice on 9/27/13.
//
//

#ifndef LightGame_EmptySquare_h
#define LightGame_EmptySquare_h

#include "GridSquare.h"

class EmptySquare : public GridSquare {
public:
    EmptySquare(int x, int y) : GridSquare (x,y) { is_empty = true;}
    
private:
    
};

#endif
