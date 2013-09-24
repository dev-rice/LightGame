#include "testApp.h"
#include "Map.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(30);
    map = Map("first map", "/Users/chrisrice/Desktop/of_v0.8.0_osx_release 2/examples/LightGame/emptyExample/src/map2.txt");
    //map.printGrid();
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    for (int j = 0; j < Map::X_SIZE; ++j){
        for (int i = 0; i < map.Map::Y_SIZE; ++i){
            GridSquare g;
            g = map.getSquare(i, j);
            switch (g.getType()){
                case 0:
                    ofSetColor(255,0,0);
                    break;
                case 2:
                    ofSetColor(0,0,0);
                    break;
                case 3:
                    ofSetColor(0,0,255);
                    //Mirrors
                    break;
            }
            
            //if its not a mirror
            ofFill();
            ofRect(g.getX()*GridSquare::HEIGHT,
                   g.getY()*GridSquare::WIDTH,
                   GridSquare::WIDTH,GridSquare::HEIGHT);
            
            ofNoFill();
            ofSetColor(0, 0, 0);
            ofRect(g.getX()*GridSquare::HEIGHT,
                   g.getY()*GridSquare::WIDTH,
                   GridSquare::WIDTH,GridSquare::HEIGHT);
        }
    }
    for (int i = 0; i < light.getSize(); ++i){
        ofFill();
        ofSetColor(255,255,255);
        ofRect(light.getSquare(i).getX() * GridSquare::HEIGHT,
               light.getSquare(i).getY() * GridSquare::WIDTH,
               GridSquare::WIDTH, GridSquare::HEIGHT);
    }
    light.propogate(map);
     
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