#include "ofApp.h"
#include<stdlib.h>
int x,y,flag,a,b;
//--------------------------------------------------------------
void ofApp::setup(){
x=0;
y=100;
flag=0;
a=0;
b=0;

}

//--------------------------------------------------------------
void ofApp::update(){

    if(flag==1)
    x=x+10;
    if(flag==0)
    x=x-10;
    if(x>=1014)
        flag=0;
    if(x<=10)
    flag=1;
    if(a<255)
    {
       a++;
       b++;
    }
    else
        {
            a=0;
            b=0;
        }




}

//--------------------------------------------------------------
void ofApp::draw(){
ofSetColor(a,b,255);

ofCircle(x, y,30);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
