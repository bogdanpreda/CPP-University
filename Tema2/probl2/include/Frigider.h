#ifndef FRIGIDER_H
#define FRIGIDER_H
#include <iostream>
using namespace std;

#include "AparatFrigorific.h"
class Frigider:virtual public AparatFrigorific
{
    public:
        Frigider();
        Frigider(int pret, int capacitate, bool areDozator);
        virtual void afisare();
        virtual ~Frigider();
    protected:
        bool areDozator;
    private:

};

#endif // FRIGIDER_H
