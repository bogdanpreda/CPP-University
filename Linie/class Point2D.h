#ifndef CLASS POINT2D_H
#define CLASS POINT2D_H

 class Point2D
{
    public:
         Point2D();
        virtual ~Point2D();
        Point2D(double x, double y);
        void draw();
        double getx();
        double gety();
        static int getCount();//functia
        friend double distanceFrom(Point2D a,Point2D b);
    protected:
    private:
        double x,y;
        static int count; //declararea
};

#endif // CLASS POINT2D_H
