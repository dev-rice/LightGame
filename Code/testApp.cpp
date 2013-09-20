#include "testApp.h"
#include "Map.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(30);
    map = Map("first map", "/Users/chrisrice/Desktop/of_v0.8.0_osx_release 2/examples/LightGame/emptyExample/src/map2.txt");
    map.printGrid();
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    for (int j = 0; j < map.getXSize(); ++j){
        for (int i = 0; i < map.getYSize(); ++i){
            GridSquare g;
            g = map.getSquare(i, j);
            switch (g.getType()){
                case 0:
                    ofFill();
                    ofSetColor(255,0,0);
                    break;
                case 2:
                    ofFill();
                    ofSetColor(0,0,0);
                    break;
                case 3:
                    ofFill();
                    break;
            }
            //if its not a mirror
            ofRect(g.getX()*10, g.getY()*10, 10,10);
            ofNoFill();
            ofSetColor(0, 0, 0);
            ofRect(g.getX()*10, g.getY()*10, 10,10);
        }
    }
    /*for (int i = 0; i < light.getSize(); ++i){
        ofRect(light.getSquare(i).getX() * GridSquare::HEIGHT,
               light.getSquare(i).getY() * GridSquare::WIDTH,
               GridSquare::WIDTH, GridSquare::HEIGHT);
    }
    light.propogate();
     */
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    light.displayLight();
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}