#ifndef POINT2D_H
#define POINT2D_H


class Point2D
{
    public:
        Point2D();
        Point2D(double, double);
        void move(double, double);
        void draw();
        virtual ~Point2D();
    protected:
    private:
        double x,y;
};

#endif // POINT2D_H
