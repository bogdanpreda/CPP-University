#include "Frigider.h"

Frigider::Frigider()
{
    areDozator = false;
}

Frigider::Frigider(int pret, int capacitate, bool areDozator)
    :AparatFrigorific(pret, capacitate)
{
    this->areDozator = areDozator;
}

void Frigider::afisare()
{
    cout<<"Frigider "<<" pret:"<<pret<<", capacitate:"<<capacitate<<
    ", areDozator:"<<areDozator<<endl;

}

Frigider::~Frigider()
{
    
}
