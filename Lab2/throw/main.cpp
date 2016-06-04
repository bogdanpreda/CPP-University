#include <iostream>
#include <string>
using namespace std;

double impartire (double a, double b)
{
    if (b == 0)
    {
        throw "nu se poate impart la 0";
    }
    return a/b;
}
void fct(int i)
{
    try
    {
        if (i==0) throw 3;
        if (i==1) throw "O alta exceptie";
        if (i==2) throw 4.333;
    }
    catch(int a)
    {
        cout << "Exceptie int! (" << a << ")\n";
    }
    catch(double a)
    {
        cout<<"exceptie double!("<<a<<")\n";
    }
    catch (...)
    {
        cout << "Restul de exceptii!\n";
    }
}

int main()
{
    double a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cin.ignore();
    try
    {
        cout << "a/b = " << impartire(a, b);
    }
    catch(string ex)
    {
        cout << "Exceptia prinsa este: " << ex;
    }
    fct(0);
    fct(1);
    fct(2);
    fct(5);
    return 0;
}
