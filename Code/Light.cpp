#include "light.h"
#include "GridSquare.h"

Light() {
	xdir = -1;
	ydir = 0;
}

void propogate() {
	// check next gridspace function
	beam.push_back(new GridSquare(beam.back.getX()+xdir, beam.back.getY()+ydir, 1);
}