#include <iostream>
#include "EngineGlut.h"
using namespace std;

int main(int argc, char** argv)
{

    initEngineGlut(argc, argv);
    EngineGlut e;
    e.drawClear();
    e.drawPoint(10,15);
    return 0;
}
