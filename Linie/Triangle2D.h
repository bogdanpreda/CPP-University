#ifndef TRIANGLE2D_H
#define TRIANGLE2D_H
#include "class Point2D.h"

class Triangle2D
{
    public:
        Triangle2D();
        Triangle2D(Point2D a,Point2D b,Point2D c, bool drawFull);
        virtual ~Triangle2D();

        void draw();
    protected:
    private:
        void drawFullSurface();
        void drawSimple();
        Point2D *a,*b,*c;
        bool drawFull;
};

#endif // TRIANGLE2D_H
