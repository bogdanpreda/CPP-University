#include "../include/Complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
    cout << " constr implicit al clasei"<<endl;
    re=10;
    im=20;
}
Complex::Complex(int a, int im)
{
    cout<<"constructor explicit"<<endl;
    re=a;
    this->im=im;
}
Complex::Complex(const Complex &c)
{
    this->re=c.re;
    this->im=c.im;

    cout<<"Constructor de copiere"<<endl;
}
Complex::~Complex()
{
    cout<<"se distruge obiectul"<<endl;
}
