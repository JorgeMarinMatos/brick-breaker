#include "GameState.h"
#include "Entity.h"

GameState::GameState() {
	for (int j = 0; j < 6; j ++) {
		for (int i = 0; i < 16; i++) {
			blocks.push_back(new Block(i * 64, j * 64, 64, 64, rand() % 255, rand() % 255, rand() % 255));
		}
	}

	player = new Player(1024 / 2 - 96, 700, 64 * 3, 12);
}
//------------------------------------------------------------------------------------------------------
void GameState::tick() {
	for (int i = 0; i < blocks.size(); i++) {
		blocks[i]->tick();
	}

	player->tick();
}
//------------------------------------------------------------------------------------------------------
void GameState::render() {
	for (int i = 0; i < blocks.size(); i++) {
		blocks[i]->render();
	}
	player->render();
}
//------------------------------------------------------------------------------------------------------
void GameState::keyPressed(int key){

}
//------------------------------------------------------------------------------------------------------
void GameState::mousePressed(int x, int y, int button){

}
//------------------------------------------------------------------------------------------------------
void GameState::keyReleased(int key){

}
//------------------------------------------------------------------------------------------------------
void GameState::reset(){
	setFinished(false);
	setNextState("");
}
