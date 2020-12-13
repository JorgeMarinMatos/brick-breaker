#include "Entity.h"

Entity::Entity(int x, int y, int width, int height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}
//------------------------------------------------------------------------------------------------------
void Entity::tick(){
    ticks++;
    
}
//------------------------------------------------------------------------------------------------------
void Entity::render(){
    ofSetColor(256,256,256);
}
//------------------------------------------------------------------------------------------------------
bool Entity::collides(Entity* entity){
    return this->getBounds().intersects(entity->getBounds());
}
//------------------------------------------------------------------------------------------------------
ofRectangle Entity::getBounds(){
    return ofRectangle(x, y, width, height);
}
//------------------------------------------------------------------------------------------------------
ofRectangle Entity::getBounds(int x, int y){
    return ofRectangle(x, y, width, height);
}