#include <iostream>
#include "Light.h"
#include "testApp.h"
#include "ofMain.h"

using namespace std;

int main() {
	//cout << "Hello, welcome to Light Game\n";
    
    //Light l;
    //l.propogate();
    
    //l.displayLight();
    
    ofSetupOpenGL(1024,768, OF_WINDOW);			// <-------- setup the GL context
    
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new testApp());
    
	return 0;
}