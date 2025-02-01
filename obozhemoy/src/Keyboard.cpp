#include "Keyboard.h"
#include "iostream"
Keyboard::Keyboard()
{
}
Keyboard::~Keyboard()
{
    //dtor
}
bool Keyboard::isPressed(int key){
    return (GetKeyState(key) & 0x8000);
}
