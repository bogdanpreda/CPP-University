#include "Triangle2D.h"
#include "Line2D.h"
#include "EngineGlut.h"
Triangle2D::Triangle2D(Point2D a,Point2D b,Point2D c, bool drawFull)
{
    this->a=new Point2D(a);
    this->b=new Point2D(b);
    this->c=new Point2D(c);
    this->drawFull=drawFull;
}

void Triangle2D::draw()
{
    if(drawFull==false)
    {
    Line2D l1(*(this->a),*(this->b));
    l1.draw();
    Line2D l2(*(this->a),*(this->c));
    l2.draw();
    Line2D l3(*(this->b),*(this->c));
    l3.draw();
    }
    else
    {
        EngineGlut engine;
        engine.drawSurface(this->a->getx(), this->a->gety(),this->b->getx(), this->b->gety(),this->c->getx(), this->c->gety());
    }
}
Triangle2D::~Triangle2D()
{
    //dtor
}
