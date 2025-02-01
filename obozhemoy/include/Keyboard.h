#ifndef KEYBOARD_H
#define KEYBOARD_H
#include <Windows.h>
#include <map>

using namespace std;

class Keyboard
{
    public:
        Keyboard();
        virtual ~Keyboard();
        bool isPressed(int key);
        map< const char*, int > keys;





    protected:

    private:

};

#endif // KEYBOARD_H
