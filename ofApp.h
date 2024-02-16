#pragma once

#include "ofMain.h"
#include "ofxJSON.h"
#include <vector>

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void getData(); //function that calls API
		void getSpell(); //function gets spell info
		void getPotion(); //function gets potion info

		void keyPressed(int key);
		void mousePressed(int x, int y, int button);
		string wrapString(string text, int width); //function returns a wrapped string to keep text on screen
		void windowResized(int w, int h);
	
		ofxJSONElement json; //Json object stores data returned from API

		enum class States { //handle app states
			SPELLS,
			POTIONS
		};

		States state;
		
		ofRectangle book, favBTN, settingBTN;

		vector<string> members; //vector used to store string values returned by API
		ofTrueTypeFont font;
		string name;
		int page;

		ofImage leftBTN, rightBTN;

};
