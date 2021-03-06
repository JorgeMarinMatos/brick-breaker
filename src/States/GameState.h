#include "State.h"
#include "Block.h"
#include "Player.h"

class GameState: public State{
    public: 
        GameState();
		void reset();
		void tick();
		void render();
		void keyPressed(int key);
		void mousePressed(int x, int y, int button);
		void keyReleased(int key);

	private:
		vector<Block*> blocks;
		Player* player;
};