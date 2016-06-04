#include "LadaFrigorifica.h"

LadaFrigorifica::LadaFrigorifica()
{
    
}

LadaFrigorifica::LadaFrigorifica(int pret, int capacitate, int numarRafturiDeCarne)
    :Congelator(pret, capacitate, numarRafturiDeCarne), AparatFrigorific(pret, capacitate)
{

}

void LadaFrigorifica::afisare()
{
    cout<<"Lada frigorifica"<<" pret:"<<pret<<", capacitate:"<<capacitate<<
    ", numarRafturiDeCarne:"<<numarRafturiDeCarne<<endl;

}

LadaFrigorifica::~LadaFrigorifica()
{
   
}
