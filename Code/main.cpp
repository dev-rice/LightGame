#include "ofMain.h"
#include "testApp.h"
#include "GridSquare.h"
#include "Map.h"

//========================================================================
int main( ){
    
	ofSetupOpenGL(Map::X_SIZE*GridSquare::SIZE, Map::Y_SIZE*GridSquare::SIZE, OF_WINDOW);
	ofRunApp( new testApp());
    
}
