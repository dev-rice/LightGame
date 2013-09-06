#include <vector>

class Light {
	private int xdir, ydir;
	private vector<GridSquare> beam;

	Light();

	void propogate();
};