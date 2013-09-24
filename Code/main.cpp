#include "ofMain.h"
#include "testApp.h"
#include "GridSquare.h"
#include "Map.h"

//========================================================================
int main( ){

	ofSetupOpenGL(Map::X_SIZE*GridSquare::WIDTH, Map::Y_SIZE*GridSquare::HEIGHT, OF_WINDOW);
	ofRunApp( new testApp());

}
