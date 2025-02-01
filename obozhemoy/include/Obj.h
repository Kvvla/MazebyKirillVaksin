#ifndef Obj_H
#define Obj_H
#include "Screen.h"
class Obj
{
    public:
        Obj();
        Obj(int x, int y, char* c, bool colidable);
        ~Obj();
        void update(Screen screen);
        int x;
        int y;
        char* c;
        bool colidable;


    protected:

    private:



};

#endif // Obj_H
