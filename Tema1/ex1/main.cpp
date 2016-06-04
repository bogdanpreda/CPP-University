#include <iostream>
#include <Planeta.h>
#include <cstdlib>
#define NR_PLANETE 20
using namespace std;

int comparareGravitatie(const void* a, const void* b)
{
    Planeta* pa = *(Planeta**) a;
    Planeta* pb = *(Planeta**) b;

    if (pb->getGravitatie() > pa->getGravitatie())
        return 1;
    else if (pa->getGravitatie() > pb->getGravitatie())
        return -1;
    return 0;
}

int main()
{
    int n;
    Planeta p1, p2("marte",23,10,5.2);
    p2.print();
    Planeta **planete = new Planeta* [NR_PLANETE];

    for(int i=0; i<NR_PLANETE; i++)
    {
        planete[i] = new Planeta;
    }
    /*
    cout<<"numarul de planete care se citesc: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"nume: nr sateliti nat: nr sateliti art: gravitatie: "<<endl;
        cin>>planete[i];
    }*/
    n = 4;
    planete[0] = new Planeta("planeta 0",10,20,20);
    planete[1] = new Planeta("planeta 1",15,10,25);
    planete[2] = new Planeta("planeta 2",55,12,5);
    planete[3] = new Planeta("planeta 3",324,20,5.6);

    for(int i=0; i<n; i++)
    {
        planete[i]->print();
        cout<<endl;
    }
    p1.print();
    p2.print();

    cout<<endl;
    Planeta::getNrMaxSateliti(planete, n);
    cout<<endl;


    cout<<endl;
    afisareDupaGravitatieInterval(planete,n);

    cout<<endl;
    cout<<"Numar total sateliti planeta "
        <<planete[0]->getName()<<": "
        <<planete[0]->getNrTotalSateliti()<<endl;
    cout<<endl;

    cout<<"Sortare: "<<endl;
    qsort(planete,n, sizeof(Planeta*), comparareGravitatie);

    for(int i=0; i<n; i++)
    {
        planete[i]->print();
        cout<<endl;
    }
    for(int i=0; i<NR_PLANETE; i++)
    {
        delete planete[i];
    }
    delete [] planete;
    return 0;
}
