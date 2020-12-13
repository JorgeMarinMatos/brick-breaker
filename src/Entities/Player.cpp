#include "Player.h"

Player::Player(int x, int y, int width, int height) : Entity(x, y, width, height) { }

void Player::tick() {
    if (isMovingL || isMovingR)
        move();
}

void Player::render() {
    ofSetColor(0);
    ofDrawRectangle(x, y, 0, width, height);
    
}

void Player::move() {
    if (isMovingL) {
        if (x > 0)
            x -= speed;
    }

    else {
        if (x + width < ofGetWidth())
            x += speed;
    }
}

void Player::keyPressed(int key) {
    if (key == 'a') {
        isMovingL = true;
    }

    if (key == 'd') {
        isMovingR = true;
    }
}

void Player::keyReleased(int key) {
    if (key == 'a') {
        isMovingL = false;
    }

    if (key == 'd') {
        isMovingR = false;
    }
}