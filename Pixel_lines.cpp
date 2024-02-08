
#include <iostream>
#include "mygraphics.h"
#include <Windows.h>

using namespace std;

int main()
{
    int y = 20;
    

    while (y < 100)
    {
        Sleep(20);

        mySetPixel(20, y, RGB(255, 0, 0));
        y++;

    }
    y = 20;
    while (y < 100)
    {
        Sleep(20);

        mySetPixel(40, y, RGB(0, 255, 0));
        y++;

    }
    y = 20;
    while (y < 100)
    {
        Sleep(20);

        mySetPixel(60, y, RGB(0, 0, 255));
        y++;

    }
     y = 20;
    while (y < 100)
    {
        Sleep(20);

        mySetPixel(80, y, RGB(255, 0, 255));
        y++;

    } 
    y = 20;
    while (y < 100)
    {
        Sleep(20);

        mySetPixel(100, y, RGB(255, 255, 255));
        y++;

    }
    y = 20;
    while (y < 100)
    {
        Sleep(20);

        mySetPixel(120, y, RGB(145, 51, 255));
        y++;

    }
   
    return 0;

}

