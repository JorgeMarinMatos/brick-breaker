#include "Entity.h"

class Player : public Entity {
    private:
        int speed = 5;

    public:
        Player(int, int, int, int);
        void tick();
        void render();
};