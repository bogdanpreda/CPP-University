#ifndef CONGELATOR_H
#define CONGELATOR_H
#include <iostream>
using namespace std;

#include "AparatFrigorific.h"
class Congelator:virtual public AparatFrigorific
{
    public:
        Congelator();
        Congelator(int pret, int capacitate, int numarRafturiDeCarne);
        virtual void afisare();
        virtual ~Congelator();
    protected:
        int numarRafturiDeCarne;
    private:

};

#endif // CONGELATOR_H
