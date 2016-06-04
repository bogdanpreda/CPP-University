#include "FrigiderSidebySide.h"

FrigiderSidebySide::FrigiderSidebySide()
{
  
}

FrigiderSidebySide::FrigiderSidebySide(int pret, int capacitate, bool areDozator)
    :Frigider(pret, capacitate, areDozator), AparatFrigorific(pret, capacitate)
{

}

void FrigiderSidebySide::afisare()
{
    cout<<"FrigiderSidebySide "<<" pret:"<<pret<<", capacitate:"<<capacitate<<
    ", areDozator:"<<areDozator<<endl;

}

FrigiderSidebySide::~FrigiderSidebySide()
{
    
}
