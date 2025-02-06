
#include <vector>
#include "Obj.h"
#include "Screen.h"
#include "Player.h"
Player::Player(int _x, int _y)
{
    x=_x;
    y=_y;
    c="@";
}

Player::~Player()
{
}
bool Player::move(int NewX, int NewY, Obj matr[23][50]) {
    if (NewY>=0 & NewY<23 & NewX>=0 & NewX<50){
        if (!matr[NewY][NewX].colidable) {
            x=NewX;
            y=NewY;
            return true;
        }
    }
    return false;
}

void Player::update(Screen screen) {
    screen.draw(x, y, c);
}
