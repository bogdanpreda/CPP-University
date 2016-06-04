#ifndef LADAFRIGORIFICA_H
#define LADAFRIGORIFICA_H

#include <iostream>
using namespace std;
#include "Congelator.h"

class LadaFrigorifica: public Congelator
{
    public:
        LadaFrigorifica();
        LadaFrigorifica(int pret, int capacitate, int numarRafturiDeCarne);
        virtual void afisare();
        virtual ~LadaFrigorifica();
    protected:
    private:
};

#endif // LADAFRIGORIFICA_H
