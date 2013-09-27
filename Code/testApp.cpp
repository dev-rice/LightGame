#include "testApp.h"
#include "Map.h"

ofImage bg;
ofImage mirror1;
ofImage mirror2;
ofImage laser1;
ofImage laser2;
ofImage wall1;

const string PATH = "/Users/chrisrice/Code/of_v0.8.0_osx_release 2/apps/myApps/LightGame/src/";


//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(30);
    map = Map("first map", PATH +"maps/map2.txt");
    
    bg.loadImage(PATH + "sprites/tile1.png");
    mirror1.loadImage(PATH + "sprites/mirror1.png");
    mirror2.loadImage(PATH + "sprites/mirror2.png");
    laser1.loadImage(PATH + "sprites/laser1.png");
    laser2.loadImage(PATH + "sprites/laser2.png");
    wall1.loadImage(PATH + "sprites/wall1.png");
    
    ofEnableAlphaBlending();
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
                    ofSetColor(255,255,255);
                    bg.draw(i*GridSquare::SIZE, j*GridSquare::SIZE);
                    break;
                case 2:
                    ofSetColor(255,255,255);
                    wall1.draw(i*GridSquare::SIZE, j*GridSquare::SIZE);
                    break;
                case 3:
                    ofSetColor(255,255,255);
                    mirror1.draw(i*GridSquare::SIZE, j*GridSquare::SIZE);
                    //Mirrors
                    break;
            }
        }
    }
    for (int i = 0; i < light.getSize(); ++i){
        ofFill();
        ofSetColor(255,255,255);
        int x = light.getSquare(i).getX()*GridSquare::SIZE;
        int y = light.getSquare(i).getY()*GridSquare::SIZE;
        
        if (light.getSpriteDirection(i) == 1){
            laser1.draw(x,y);
        } else if (light.getSpriteDirection(i) == 2){
            laser2.draw(x,y);
        }
        
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