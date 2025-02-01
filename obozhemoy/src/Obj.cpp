#include "Obj.h"

Obj::Obj(int _x, int _y, char* _c, bool _colidable)
{
    x=_x;
    y=_y;
    c=_c;
    colidable=_colidable;
}

Obj::Obj()
{

}

Obj::~Obj()
{

}
void Obj::update(Screen screen) {
    screen.draw(x, y, c);
}
