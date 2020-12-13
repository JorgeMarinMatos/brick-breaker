#include "MenuState.h"

MenuState::MenuState() {
	startButton = new Button(ofGetWidth()/2, ofGetHeight()/4, 64*2, 50*2, "Start");
}
//------------------------------------------------------------------------------------------------------
void MenuState::tick() {
	startButton->tick();
	if(startButton->wasPressed()){
		setNextState("Game");
		setFinished(true);

	}
}
//------------------------------------------------------------------------------------------------------
void MenuState::render() {
	startButton->render();
}
//------------------------------------------------------------------------------------------------------
void MenuState::keyPressed(int key){
	
}
//------------------------------------------------------------------------------------------------------
void MenuState::mousePressed(int x, int y, int button){
	startButton->mousePressed(x, y);
}
//------------------------------------------------------------------------------------------------------
void MenuState::reset(){
	setFinished(false);
	setNextState("");
	startButton->reset();
}