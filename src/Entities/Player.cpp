#include "Player.h"

Player::Player(int x, int y, int width, int height) : Entity(x, y, width, height) { }

void Player::tick() {

}

void Player::render() {
    ofSetColor(0);
    ofDrawRectangle(x, y, 0, width, height);
    
}