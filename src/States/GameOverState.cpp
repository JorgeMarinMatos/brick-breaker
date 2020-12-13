#include "GameOverState.h"

//Game over state implementation with game over button
GameOverState::GameOverState() {
    restartButton = new Button(ofGetWidth()/2, ofGetHeight()/2, 64, 50, "Try Again");
}
//------------------------------------------------------------------------------------------------------
void GameOverState::tick() {
    restartButton->tick();
    if (restartButton->wasPressed()) {
        setNextState("Game");
        setFinished(true);
    }
}
//------------------------------------------------------------------------------------------------------
void GameOverState::render() {
    restartButton->render();
}
//------------------------------------------------------------------------------------------------------
void GameOverState::keyPressed(int key) {

}
//------------------------------------------------------------------------------------------------------
void GameOverState::mousePressed(int x, int y, int button) {
    restartButton->mousePressed(x, y);
}
//------------------------------------------------------------------------------------------------------
void GameOverState::reset() {
    setFinished(false);
    setNextState("");
    restartButton->reset();
}