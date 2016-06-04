#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}
int main()
{
    int numar,suma=0;
    cout << "introduceti un numar: ";
    cin>>numar;
    while(numar)
    {
        suma+=numar%10;
        numar/=10;
    }
    cout<<"suma cifrelor numarului este: "<<suma;

    int n=6;
    int & ir = n;
    cout<< "n=" << n << " ir=" <<ir << endl;
    ir = 100; // echivalent cu n =100;
    cout<< "n=" << n << " ir=" <<ir << endl;
    n=7;
    cout<< "n=" << n << " ir=" <<ir << endl;

    int a=10, b=20;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}
