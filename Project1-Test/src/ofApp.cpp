#include "ofApp.h"

int w = 500;
int h = 600;
int r = 50;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(38,150,120,100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofVec2f PeterCenter(w,h);
    //Peter's body
    ofSetColor(42,64,238,200);
    ofDrawRectangle(w-2 * r,h-r,2 * r,4.5 * r);
    ofDrawRectangle(w - 3 * r,h+2*r, 3 * r, 1.5 * r);
    //Peter's head
    ofSetCircleResolution(100);
    ofSetColor(255,67,152);
    ofDrawCircle(PeterCenter,r);
    //eye
    ofSetColor(255,255,255);
    ofDrawEllipse(w-0.5*r, h, 35, 25);
    ofSetColor(42,64,238);
    ofDrawCircle(w-0.5*r,h,10);
    
    ofSetColor(255,255,255);
    ofDrawEllipse(w+0.5*r, h, 35, 25);
    ofSetColor(42,64,238);
    ofDrawCircle(w+0.5*r,h,10);
    //mouth
    ofSetColor(255,210,0);
    ofDrawRectangle(w-r/4,h+r/4,r/2,10);
    
    
    //MA1's head
    ofDrawTriangle(w*2,h,50+w*2,h-50,w*2-75,h-75);
    ofSetColor(255,255,255);
    ofDrawCircle(w*2,h-40,20);
    ofSetColor(255,67,152);
    ofDrawCircle(w*2,h-40,10);
    //MA1's body
    ofSetColor(255,255,255);
    ofDrawTriangle(w*2,h,50+w*2,h+200,w*2-45,h+200);
    ofSetColor(255,67,152,220);
    ofDrawTriangle(w*2,h,70+w*2,h+200,w*2-40,h+150);
    
    
    
    //tree
    ofSetColor(255,67,152,200);
    ofDrawTriangle(w*1.5,h-20,w*1.5-150,h+200,w*1.5+150,h+200);

    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
