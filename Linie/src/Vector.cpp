#include <iostream>
#include "Vector.h"

using namespace std;
Vector::Vector()
{
    for(int i=0;i<this->Dim;i++)
        this->data[i]=0;
    }

Vector::Vector(double number)
{
    for(int i=0;i<this->Dim;i++)
        this->data[i]=number;
    }
 double get data(int poz)
 { return this->data[poz];

 }
double Vector::operator[](int poz)
 { return this->data[poz];

 }

void Vector::print()
{
        for(int i=0;i<this->Dim;i++)
            cout<<this->data[i]<<" ";
            cout<<endl;
}

Vector::~Vector()
{

}
