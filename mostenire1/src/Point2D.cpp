#include "Point2D.h"

Point2D::Point2D()
{
    x = 0;
    y = 0;
}
Point2D::Point2D(double x, double y)
{
    this->x = x;
    this->y = y;
}
void Point2D::move(double deltaX, double deltaY)
{
    this->x += deltaX;
    this->y += deltaY;
}
Point2D::~Point2D()
{
    //dtor
}
