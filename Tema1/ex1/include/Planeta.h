#ifndef PLANETA_H
#define PLANETA_H
#include <iostream>
using namespace std;

class Planeta
{
    public:
        Planeta();
        Planeta(const Planeta &);
        Planeta(char*, int, int, double);
        Planeta& operator=(const Planeta &);
        int getNrTotalSateliti();
        char *getName();
        double getGravitatie();
        static void getNrMaxSateliti(Planeta **, int);
        friend void afisareDupaGravitatieInterval(Planeta **p, int);
        friend istream &operator>>(istream &o, Planeta &p);
        friend istream &operator>>( istream  &input, Planeta* &p );
        void print();
        virtual ~Planeta();
    private:
        char *nume;
        int numar_sateliti_naturali;
        int numar_sateliti_artificiali;

        static int numar_max_sateliti_naturali;
        static int numar_max_sateliti_artificiali;

        double gravitatie;
};


#endif // PLANETA_H
