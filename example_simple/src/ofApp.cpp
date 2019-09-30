#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	font.setup("fonts/Arial Unicode.ttf", 1.0, 1024, false, 8, 1.5); 
	font.setCharacterSpacing(0);

	//font.setLodBias(0.4); //-1..1
	//font.setKerning(!unicodeFont.getKerning());

}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);

	ofSetColor(255);

	//To draw with font, it's required to enable filling and set font size
	ofFill();
	font.setSize(20);
	font.drawString("Test", 200, 200);

}


//--------------------------------------------------------------
void ofApp::keyPressed(int k){
	
}

//--------------------------------------------------------------
