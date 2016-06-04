#ifndef FRIGIDERSIDEBYSIDE_H
#define FRIGIDERSIDEBYSIDE_H

#include <iostream>
#include "Frigider.h"
using namespace std;
class FrigiderSidebySide:public Frigider
{
    public:
        FrigiderSidebySide();
        FrigiderSidebySide(int pret, int capacitate, bool areDozator);
        void afisare();
        virtual ~FrigiderSidebySide();
    protected:
    private:
};

#endif // FRIGIDERSIDEBYSIDE_H
