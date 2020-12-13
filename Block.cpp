#include "Block.h"

Block::Block(int x, int y, int width, int height, int r, int g, int b): Entity(x, y, width, height) { 
    this->r = r;
    this->g = g;
    this->b = b;
}

void Block::tick() {

}

void Block::render() {
    ofSetColor(r, g, b);
    ofDrawRectangle(x, y, 0, width, height);
}