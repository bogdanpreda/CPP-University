#include "AparatFrigorific.h"
#include<iostream>
using namespace std;
AparatFrigorific::AparatFrigorific()
{
    capacitate = 0;
    pret = 0;
}

AparatFrigorific::AparatFrigorific(int pret, int capacitate)
{
    this->capacitate = capacitate;
    this->pret = pret;
}

void AparatFrigorific::afisare()
{
    cout<<"Aparat frigorific "<<" pret:"<<pret<<", capacitate:"<<capacitate<<endl;
}

int AparatFrigorific::getPret()
{
    return pret;
}

int AparatFrigorific::getCapacitate()
{
    return capacitate;
}

AparatFrigorific::~AparatFrigorific()
{

}
