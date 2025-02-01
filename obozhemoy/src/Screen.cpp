#include "Screen.h"
#include <windows.h>
Screen::Screen()
{
    buffer = std::vector<std::vector<char*>>(HEIGHT, std::vector<char*>(WIDTH, " "));
}
Screen::~Screen()
{

}
void Screen::clearBuffer(){
        for (int y=0; y<HEIGHT; y++) {
            for(int x=0; x<WIDTH; x++) {
                buffer[y][x]="_";
            }
        }
}
void Screen::draw(int x, int y, char* c){
        buffer[y][x]=c;
}
void Screen::update() {
        clear();
        for (int y=0; y<HEIGHT; y++) {
            for(int x=0; x<WIDTH; x++) {
                std::cout<<buffer[y][x]<<" ";
            }
            cout<<endl;
        }
        Sleep(300);



    }
void Screen::clear() {
        system("cls");
}
