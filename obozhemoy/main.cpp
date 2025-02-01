#include <iostream>
#include "Screen.h"
#include "Keyboard.h"
#include <windows.h>
#include <vector>
#include <fstream>
#include "Obj.h"
#include "Player.h"
using namespace std;

int main()
{
    Keyboard k;
    //Костыль! Я пытался сделать keys и в конструкторе, и в хеадере, но ничто не работало, пришлось прописывать в main
    k.keys ={
            {"A",0x41},
            {"B",0x42},
            {"C",0x43},
            {"D",0x44},
            {"E",0x45},
            {"F",0x46},
            {"G",0x47},
            {"H",0x48},
            {"I",0x49},
            {"J",0x4A},
            {"K",0x4B},
            {"L",0x4C},
            {"M",0x4D},
            {"N",0x4E},
            {"O",0x4F},
            {"P",0x50},
            {"Q",0x51},
            {"R",0x52},
            {"S",0x53},
            {"T",0x54},
            {"U",0x55},
            {"V",0x56},
            {"W",0x57},
            {"X",0x58},
            {"Y",0x59},
            {"Z",0x5A},
            {"SPACE",0x20},
            {"UP",0x26},
            {"DOWN",0x25},
            {"RIGHT",0x27},
            {"LEFT",0x28},
            {"0",0x30},
            {"1",0x31},
            {"2",0x32},
            {"3",0x33},
            {"4",0x34},
            {"5",0x35},
            {"6",0x36},
            {"7",0x37},
            {"8",0x38},
            {"9",0x39}
        };
    Screen screen;
    Obj Matr[23][50];
    ifstream in;
    in.open("map.txt");
    char* mem = new char[50];
    for (int i=0; i<23; i++){
        in>>mem;
        for (int j=0; j<50; j++){

            if (mem[j]=='#') {
                Matr[i][j]=Obj(j, i, "#", true);
            } else {
                Matr[i][j]=Obj(j, i, ".", false);
            }
        }
    }
    in.close();
    Player pl(1,1);
    bool run=true;
    bool moven=true;
    while (run) {



        if (k.isPressed(k.keys["W"])) {
            pl.move(pl.x, pl.y-1, Matr);
            moven=true;
        }
        else if (k.isPressed(k.keys["A"])) {
            pl.move(pl.x-1, pl.y, Matr);
            moven=true;
        }
        else if (k.isPressed(k.keys["S"])) {
            pl.move(pl.x, pl.y+1, Matr);
            moven=true;
        }
        else if (k.isPressed(k.keys["D"])) {
            pl.move(pl.x+1, pl.y, Matr);
            moven=true;
        }
        if (moven){
            for (int i=0; i<23; i++){
                for (int j=0; j<50; j++){
                        screen.draw(j, i, Matr[i][j].c);
                }
            }
            screen.draw(pl.x, pl.y, "@");
            screen.update();
        }
        if (pl.x==49 && pl.y==21) {
            run=false;
        }
        moven=false;
    }


    return 0;
}
