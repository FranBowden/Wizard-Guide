#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup() {
	

	//font.load("fonts/HarryP-MVZ6w.ttf", 20);//load font

	int rectWidth = ofGetWidth() - 100;
	int rectHeight = ofGetHeight() - 100;
	book.set((ofGetWidth() - rectWidth) / 2, (ofGetHeight() - rectHeight) / 2 + 25, rectWidth, rectHeight);
	favBTN.set(book.getX() + (book.getWidth() - 600 / 2), book.getY() - 50, 70, 60);
	settingBTN.set(book.getX() + (book.getWidth() - 400 / 2), book.getY() - 50, 70, 60);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){

	ofBackground(32, 21, 64); //set background to purple


	//animation
	ofPushMatrix();
	ofSetColor(49, 26, 107);
	ofTranslate(book.getWidth() / 2, book.getHeight() / 2); //animation is centred in the middle of book
	ofRotateDeg(45);

	
	float time = ofGetElapsedTimef(); // Get elapsed time
	float rotationAngle = time * 1; // calculate rotation angle based on time and speed

	for (int i = 0; i < 300; i += 20) {
			ofDrawCircle(i, j, 5);
			ofRotateDeg(rotationAngle);
		
	}

	ofPopMatrix();

	//buttons

	ofSetColor(49, 26, 107);
	ofDrawRectRounded(favBTN, 10);
	ofDrawRectRounded(settingBTN, 10);
	
	ofSetColor(61, 31, 135);
	ofDrawRectRounded(book, 10);

	
}

void ofApp::getData() {
	
	page = 0; //reset page
	
	if (state == States::POTIONS) {
		json.open("https://api.potterdb.com/v1/potions");
	}
	else if (state == States::SPELLS) {
		json.open("https://api.potterdb.com/v1/spells");
	}
	

}
void ofApp::getSpell() {

}

void ofApp::getPotion() {

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}



//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}



//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}
