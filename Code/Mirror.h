#ifndef LightGameXCode_Mirror
#define LightGameXCode_Mirror

#include "GridSquare.h"

class Mirror: public GridSquare {
private:
	bool state = 0;

public:
	Mirror(bool state);

	void reflect(int edge);
};
#endif