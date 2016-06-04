#include "Jucarie.h"
#include <string.h>
#include <iostream>
#include <list>
using namespace std;
int Jucarie::varsta_rec = 40;
Jucarie::Jucarie()
{
    varsta = 0;
    pret = 0;
    tara = nullptr;
}
char* Jucarie::get_tara()
{
    return this->tara;
}
Jucarie::Jucarie(int varsta, double pret, char *tara)
{
    if(varsta>Jucarie::varsta_rec)
        throw "Varsta este prea mare";
    this->varsta = varsta;
    this->pret = pret;
    this->tara = new char[strlen(tara)+1];
    strcpy(this->tara, tara);
}

Jucarie& Jucarie::operator=(const Jucarie &j)
{
    if(this == &j)
        return *this;
    if(tara !=nullptr)
        delete []tara;
    tara = new char[strlen(j.tara)+1];
    strcpy(tara, j.tara);
    varsta = j.varsta;
    pret = j.pret;
    return *this;
}
void Jucarie::print_jucarie()
{
    cout<<"Varsta: "<<this->varsta<<" Pret: "<<this->pret<<" Tara: "<<this->tara<<endl;
}
void numar_jucarii(Jucarie **juc)
{
    bag tarile intr un vector de aparitii sau un vector fara dubluri
    parcurgem pentru fiecare tara din vector sirul de jucarii. contorizam aparitia si o afisam la iesirea din for
    list <char*> lista_tari;
    for(int i=0;i<10;i++)
    {
        lista_tari.push_back(juc[i]->get_tara());
    }
}
bool Jucarie::operator>(const Jucarie &j)
{
    if(this->pret>j.pret)
        return true;
    else
        return false;
}
static void modifica_varsta_recomandata(int nr)
{
    Jucarie::varsta_rec = nr;
}
ostream& operator <<(ostream &o, const Jucarie& juc)
{
    o<<juc.varsta<<" "<<juc.pret<<" "<<juc.tara<<endl;
}
Jucarie::~Jucarie()
{
    if(tara!=nullptr)
        delete []this->tara;

    cout<<"destructor"<<endl;
}
