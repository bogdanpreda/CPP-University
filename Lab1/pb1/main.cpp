#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[50];
    int i;
    double d;

    cout<<"nume:";
    cin>>name;

    cout<<"introdu un numar intreg si un numar zecimal: ";
    cin>>i>>d;

    cout<<"salut, "<<name<<"!\n";
    cout<<"Numarul intreg este: "<<i<<endl;
    cout<<"Numarul zecimal este: "<<d<<endl;

    int ap = 0;

    for(int i=0;i<strlen(name);i++)
    {
        if(strchr("a",name[i]))
        {
            ap++;
        }
    }
    cout << "caracterul a apare de: "<<ap<<" ori.";

    return 0;

}
