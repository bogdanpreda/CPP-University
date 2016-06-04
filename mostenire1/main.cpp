#include <iostream>
#include <windows.h>
#include "EngineGlut.h"
//#include "Point2D.h"
using namespace std;

void animation(Point2D *point)
{
    EngineGlut engine;
    for(int i=0;i<20;i++)
    {
        engine.drawClear();
        point->move(5,0);
        point->draw();
        sleep(200);
    }
}

int main(int argc, char** argv)
{
    initEngineGlut(argc, argv);
    Point2D p(1,1);
    animation(&p);
    return 0;
}
