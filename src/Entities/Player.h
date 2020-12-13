#include "Entity.h"

class Player : public Entity {
    private:
        int speed = 25;
        bool isMovingR = false;
        bool isMovingL = false;

    public:
        Player(int, int, int, int);
        void tick();
        void render();
        void keyPressed(int);
        void keyReleased(int);
        void move();
};