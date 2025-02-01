#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <vector>
using namespace std;
class Screen {
private:
    static const int WIDTH = 50;
    static const int HEIGHT = 23;
    std::vector<std::vector<char*>> buffer;
    void clearBuffer();
public:
    void draw(int x, int y, char* c);
    void update();
    void clear();
    Screen();
    ~Screen();
};

#endif // SCREEN_H
