#ifndef VECTOR_H
#define VECTOR_H
using namespace std;

class Vector
{
    public:
        Vector();
        virtual ~Vector();
        static const int Dim=10;
        void print();
        Vector (double number);
        double getdata(int poz);
        double operator[](int poz);
    protected:
    private:
        double data[Dim];
};

#endif // VECTOR_H
