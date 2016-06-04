#include "../include/Stiva.h"
#include <iostream>
using namespace std;
Stiva::Stiva(int d)
{
    cout<<"apel constructor pentru obiectul "<<this<<"de tip stiva cu dim"<<d<<endl;
    if(d<=0)
        throw "Dimensiunea stivei trebuie sa fie mai mare decat 1";
    this->dim=d;
    this->index=0;
    this->tab=new int[this->dim];
}
Stiva::Stiva(const Stiva &c)
{
    this->index=c.index;
    this->dim=c.dim;
    this->tab=new int[this->dim];
    for(int i=0;i<=this->index;i++)
    {
        this->tab[i]=c.tab[i];
    }
}
Stiva::~Stiva()
{
    cout << "Apel destructor pentru obiectul " << this << " de tip Stiva cu dimensiunea "<< this->dim<< endl;
    if(this->tab!=NULL)
        delete []tab;
}
bool Stiva::isEmpty()
{
    return this->index==0;
}
bool Stiva::isFull()
{
    return this->index==this->dim;
}
int Stiva::pop()
{
    if(this->isEmpty())
        throw "stiva este goala, nu se mai pot extreage elemente";
    int v=this->tab[index];
    this->tab[index]=0;
    this->index--;
    return v;
}
void Stiva::push(int el)
{
    if(this->isFull())
        throw "stiva este plina";
    this->tab[index]=el;
    this->index++;
}
void Stiva::display()
{
    if(this->isEmpty())
        throw "stiva este goala";
    else{
        for(int i=0; i<this->index; i++)
    {
        cout<<this->tab[i]<<" ";
    }
    }

    cout<<endl;

}
