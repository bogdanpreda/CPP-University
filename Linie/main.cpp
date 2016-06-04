#include <iostream>
#include "EngineGlut.h"
#include "class Point2D.h"
#include "Line2D.h"
#include "Triangle2D.h"


using namespace std;
int main(int argc, char** argv)
{

    initEngineGlut(argc, argv);

    Point2D p(5,5);
    p.draw();
    /*
    Point2D::getCount();
    Point2D q(3,5);
    q.draw();
    Point2D::getCount();
    Point2D*r=new Point2D(7,7);
    Point2D::getCount();
    delete r;


    Point2D aaa(0,100);
    Point2D bbb(100,100);
    Line2D l(aaa,bbb);
    l.draw();
    Point2D ccc(0,0);
    Line2D(aaa,ccc);


    Triangle2D t(aaa,bbb,ccc,true);
    t.draw();

*/

    return 0;
}
