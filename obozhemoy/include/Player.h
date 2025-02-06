#ifndef PLAYER_
#define PLAYER_

#include <vector>
#include "Obj.h"
#include "Screen.h"

using namespace std;

class Player
{
    public:
        Player(int _x, int _y);
        virtual ~Player();
        bool move(int NewX, int NewY, Obj matr[23][50]);
        void update(Screen screen);

        int x;
        int y;

    protected:

    private:

        char* c;
};

#endif // PLAYER_
