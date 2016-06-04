#include <iostream>
#include <string.h>
using namespace std;
int add(int a, int b)
{
    return a+b;
}
void add(char *s1, char *s2)
{
    char *rez=new char[strlen(s1)+strlen(s2)+1];
    strcpy(rez, s1);
    strcat(rez,s2);
    cout<<"Adunare de numere "<<rez<<endl;
    delete[] rez;
}
int main()
{
    int a=10, b=10;
    char *s1="first ", *s2="laboratory!";
    cout<<"adunare de numere "<<add(a,b)<<endl;
    add(s1,s2);
    return 0;
}
