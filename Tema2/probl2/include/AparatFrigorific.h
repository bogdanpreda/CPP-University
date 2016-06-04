#ifndef APARATFRIGORIFIC_H
#define APARATFRIGORIFIC_H

#include <iostream>
using namespace std;
class AparatFrigorific
{
    public:
        AparatFrigorific();
        AparatFrigorific(int pret, int capacitate);
        int getPret();
        int getCapacitate();
        virtual void afisare();
        virtual ~AparatFrigorific();
    protected:
        int pret;
        int capacitate;
    private:
};

#endif // APARATFRIGORIFIC_H
