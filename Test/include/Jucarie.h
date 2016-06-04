#ifndef JUCARIE_H
#define JUCARIE_H
#include <string.h>
#include <iostream>
#include <list>
using namespace std;
class Jucarie
{
    public:
        Jucarie();
        Jucarie(int, double, char*);
        void print_jucarie();
        int get_varsta();
        double get_pret();
        char* get_tara();
        bool operator>(const Jucarie &j);
        static int varsta_rec;
        Jucarie & operator = (const Jucarie &j);
        friend void numar_jucarii_tara(Jucarie **juc);
        static void modifica_varsta_recomandata(int);
        friend ostream& operator <<(ostream &o, const Jucarie& juc);
        virtual ~Jucarie();
    protected:
    private:

        int varsta;
        double pret;
        char *tara;
        void init(int varsta, double pret, char* tara);

};

#endif // JUCARIE_H

/*

ostream& operator <<(ostream& out, RationalNumber& a)
{
    out<<a.numerator<<"/"<<a.denominator;
    return out;
}

*/

