#include "class Point2D.h"
#include "EngineGlut.h"
#include<iostream>

using namespace std;

int Point2D::count=0; //definirea
Point2D::Point2D()
{
    this->x=0;
    this->y=0;
    count++;
}

Point2D::Point2D(double x,double y)
{
    this->x=x;
    this->y=y;
    count++;
}

int Point2D::getCount() //implementarea
{
    return count;
}

double Point2D::getx()
{
    return this->x;
}
double Point2D::gety()
{
    return this->y;
}



Point2D::~Point2D()
{

}

void Point2D::draw()
{
    EngineGlut engine;
    engine.drawPoint(this->x,this->y);
}
