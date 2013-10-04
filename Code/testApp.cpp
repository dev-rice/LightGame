#include "testApp.h"
#include "Map.h"

ofImage bg;
ofImage mirror1;
ofImage mirror2;
ofImage light1;
ofImage light2;
ofImage wall1;

const string PATH = "/Users/chrisrice/Code/of_v0.8.0_osx_release 2/apps/myApps/LightGame/src/";


//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(30);
    map = Map("first map", PATH +"maps/map2.txt");
    map.printGrid();
    
    bg.loadImage(PATH + "sprites/tile1.png");
    mirror1.loadImage(PATH + "sprites/mirror1.png");
    mirror2.loadImage(PATH + "sprites/mirror2.png");
    light1.loadImage(PATH + "sprites/laser1.png");
    light2.loadImage(PATH + "sprites/laser2.png");
    wall1.loadImage(PATH + "sprites/wall1.png");
    
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    for (int column = 0; column < Map::X_SIZE; ++column){
        for (int row = 0; row < Map::Y_SIZE; row++) {
            GridSquare* g = map.getSquare(row,column);
            
            ofImage tile_drawer;
            
            if (g->isEmpty()){
                tile_drawer = bg;
            }
            else if (g->isWall()){
                tile_drawer = wall1;
            }
            else if (g->isMirror()){
                tile_drawer = mirror1;
            }
            else if (g->isLight()){
                tile_drawer = light1;
            }
            
            tile_drawer.draw(row*GridSquare::SIZE, column*GridSquare::SIZE);
        }
    }
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