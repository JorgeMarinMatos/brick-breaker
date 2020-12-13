#pragma once

#include "Entity.h"

class Block: public Entity{
    private:
        int r;
        int g;
        int b;

    public:
        Block(int, int, int, int, int, int, int);
        void tick();
        void render();
};