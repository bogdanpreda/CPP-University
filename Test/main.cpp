#include <iostream>
#include "Jucarie.h"
using namespace std;

int main()
{
    int contor=0;
    char nume_tara[50];
    Jucarie **jucarii = new Jucarie *[3];
    for(int i=0;i<10;i++)
    {
        jucarii[i] = new Jucarie;
    }

    jucarii[0] = new Jucarie(5,10,"Anglia");
    jucarii[1] = new Jucarie(10,20,"Japonia");
    jucarii[2] = new Jucarie(5,5,"Franta");

    for(int i=0;i<3;i++)
    {
        jucarii[i]->print_jucarie();

    }
    cout<<"intr tara";
    cin>>nume_tara;
    for(int i=0;i<3;i++)
    {
        if(strcmp(jucarii[i]->get_tara(),nume_tara)==0)
            contor++;
    }
    cout<<contor<<endl;
    Jucarie jucarie1(8,52.5,"Romania");

    //cout << jucarie1;
    jucarie1.print_jucarie();

    Jucarie jucarie3(8,1000.5,"Romania");

    //cout << jucarie1;
    jucarie3.print_jucarie();
    cout<<(jucarie3>jucarie1)<<endl;
    Jucarie *jucarie2 = new Jucarie(10,100.5,"China");

    jucarie2->print_jucarie();
    //cout<<*jucarie2;

    cout<<Jucarie::varsta_rec;
    delete jucarie2;
    return 0;
}
