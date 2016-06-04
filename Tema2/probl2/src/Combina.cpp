#include "Combina.h"

Combina::Combina()
{
    capacitateFrigider = 0;
    capacitate_congelator = 0;
}

Combina::Combina(int pret, int capacitate, bool areDozator, int numarRafturiDeCarne, int capacitateFrigider, int capacitate_congelator)
    :Frigider(pret, capacitate, areDozator), Congelator(pret, capacitate, numarRafturiDeCarne), AparatFrigorific(pret, capacitate)
{
    this->capacitateFrigider = capacitateFrigider;
    this->capacitate_congelator = capacitate_congelator;
}

void Combina::afisare()
{
    cout<<"Combina "<<" pret:"<<pret<<", capacitate:"<<capacitate<<
    ", areDozator:"<<areDozator<<", numarRafturiDeCarne:"<<numarRafturiDeCarne<<
    ", capacitateFrigider:"<<capacitateFrigider<<", capacitate_congelator:"<<capacitate_congelator<<endl;

}

Combina::~Combina()
{

}
