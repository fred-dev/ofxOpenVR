#pragma once

//Example of rendering panoramic image in VR using a shader.

#include "ofMain.h"
#include "ofxOpenVR.h"
#include "ofxOpenVRPanoramic.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void exit();

		void update();
		void draw();

		void render(vr::Hmd_Eye nEye);
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		ofxOpenVR openVR;
		ofxOpenVRPanoramic pano;

		bool bShowHelp;
		std::ostringstream _strHelp;

};
