#include "Congelator.h"

Congelator::Congelator()
{
    numarRafturiDeCarne = 0;
}

Congelator::Congelator(int pret, int capacitate, int numarRafturiDeCarne)
    :AparatFrigorific(pret, capacitate)
{
    this->numarRafturiDeCarne = numarRafturiDeCarne;
}

void Congelator::afisare()
{
    cout<<"Congelator "<<" pret:"<<pret<<", capacitate:"<<capacitate<<
    ", numarRafturiDeCarne:"<<numarRafturiDeCarne<<endl;

}

Congelator::~Congelator()
{
    
}
