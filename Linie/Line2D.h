#ifndef LINE2D_H
#define LINE2D_H
#include<iostream>
#include "class Point2D.h"
using namespace std;
class Line2D
{
    public:
        Line2D(Point2D a,Point2D b);
        virtual ~Line2D();
        void draw ();
    protected:
    private:
        Point2D *a,*b;
};

#endif // LINE2D_H
