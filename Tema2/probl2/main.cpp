#include <iostream>
#include <string.h>
#include <typeinfo>
#include "AparatFrigorific.h"
#include "Frigider.h"
#include "Congelator.h"
#include "Combina.h"
#include "FrigiderSidebySide.h"
#include "LadaFrigorifica.h"
using namespace std;


void numarLaziFrigorifice_and_frigidere(AparatFrigorific** listaObiecte, int nrObiecte)
{
    int numarLaziFrigorifice = 0;
    int nr_frig = 0;
    for(int i = 0; i < nrObiecte; i++)
    {
        if(strstr(typeid(*listaObiecte[i]).name(), "Frigider"))
            nr_frig++;
        else if(strstr(typeid(*listaObiecte[i]).name(), "LadaFrigorifica"))
            numarLaziFrigorifice++;
    }
    cout<<"Numar lazi frigorifice: "<<numarLaziFrigorifice<<endl;
    cout<<"Numar frigidere: "<<nr_frig<<endl;
}


int main()
{
    int nrObiecte = 7;

    AparatFrigorific** listaObiecte = new AparatFrigorific*[nrObiecte];

    for(int i = 0; i < nrObiecte; i++)
    {
        listaObiecte[i] = new AparatFrigorific;
    }

    AparatFrigorific aparat_frigorific1(550, 66);
    Frigider frigider1(454, 74, false);
    Congelator congelator(234, 60, 5);
    FrigiderSidebySide frigider_side(800, 60, false);
    LadaFrigorifica lfrigider1(800, 100, 10);
    Combina combina1(1200, 200, false, 12, 130, 70);
    Combina combina2(1111,232,true, 15, 230, 150);

    listaObiecte[0] = &aparat_frigorific1;
    listaObiecte[1] = &frigider1;
    listaObiecte[2] = &congelator;
    listaObiecte[3] = &frigider_side;
    listaObiecte[4] = &combina2;
    listaObiecte[5] = &combina1;
    listaObiecte[6] = &lfrigider1;
    for(int i = 0; i < nrObiecte; i++)
    {
        listaObiecte[i]->afisare();
    }
    cout<<endl;

    numarLaziFrigorifice_and_frigidere(listaObiecte, nrObiecte);
    cout<<endl;

    int suma = 0;
    for(int i = 0; i < nrObiecte; i++)
    {
        suma += listaObiecte[i]->getPret();
    }
    cout<<"pret mediu obiecte "<<(double)suma/nrObiecte<<endl;

    int suma_af = 0, suma_frigidere = 0, s_cong = 0, suma_frigideres = 0, suma_lf = 0, suma_combine = 0;

    int nr_af = 0;
    int nr_frig = 0;
    int nr_cong = 0;
    int nr_frigs = 0;
    int nr_lf = 0;
    int nr_combine = 0;

    for(int i = 0; i<nrObiecte; i++)
    {
        if(strstr(typeid(*listaObiecte[i]).name(), "AparatFrigorific"))
        {
            nr_af++;
            suma_af += listaObiecte[i]->getCapacitate();
        } else
        if(strstr(typeid(*listaObiecte[i]).name(), "Frigider") &&
           !strstr(typeid(*listaObiecte[i]).name(), "FrigiderSidebySide"))
        {
            nr_frig++;
            suma_frigidere += listaObiecte[i]->getCapacitate();
        } else
        if(strstr(typeid(*listaObiecte[i]).name(), "Congelator"))
        {
            nr_cong++;
            s_cong += listaObiecte[i]->getCapacitate();
        } else
        if(strstr(typeid(*listaObiecte[i]).name(), "FrigiderSidebySide"))
        {
            nr_frigs++;
            suma_frigideres += listaObiecte[i]->getCapacitate();
        } else
        if(strstr(typeid(*listaObiecte[i]).name(), "LadaFrigorifica"))
        {
            nr_lf++;
            suma_lf += listaObiecte[i]->getCapacitate();
        } else
        if(strstr(typeid(*listaObiecte[i]).name(), "Combina"))
        {
            nr_combine++;
            suma_combine += listaObiecte[i]->getCapacitate();
        }
    }

    cout<<"Capacitate medie Aparat frigorific: "<<(float)suma_af/nr_af<<endl;
    cout<<"Capacitate medie Frigider: "<<(float)suma_frigidere/nr_frig<<endl;
    cout<<"Capacitate medie Congelator: "<<(float)s_cong/nr_cong<<endl;
    cout<<"Capacitate medie FrigiderSidebySide: "<<(float)suma_frigideres/nr_frigs<<endl;
    cout<<"Capacitate medie Lada frigorifica: "<<(float)suma_lf/nr_lf<<endl;
    cout<<"Capacitate medie Combina: "<<(float)suma_combine/nr_combine<<endl;


    int a,b;

    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    for(int i = 0; i < nrObiecte; i++)
    {
        if(listaObiecte[i]->getPret() >= a &&
            listaObiecte[i]->getPret() <= b)
        {
            listaObiecte[i]->afisare();
        }
    }

    for(int i = 0; i < nrObiecte; i++)
    {
        delete listaObiecte[i];
    }
    delete[] listaObiecte;

    return 0;
}
