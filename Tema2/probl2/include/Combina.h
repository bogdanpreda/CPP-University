#ifndef COMBINA_H
#define COMBINA_H
#include "Congelator.h"
#include <iostream>

#include "Frigider.h"
using namespace std;
class Combina: public Frigider, public Congelator
{
    public:
        Combina();
        Combina(int pret, int capacitate, bool areDozator, int numarRafturiDeCarne, int capacitateFrigider, int capacitate_congelator);
        virtual void afisare();
        virtual ~Combina();
    protected:
    private:
        int capacitateFrigider;
        int capacitate_congelator;
};

#endif // COMBINA_H
