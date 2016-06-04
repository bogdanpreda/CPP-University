#include <iostream>
#include "include/Stiva.h"
using namespace std;

int main()
{
 Stiva s; //declaratie unui obiect de tip stiva
s.push(7);
s.push(10);
s.push(5);

Stiva sc = s;
s.display();
sc.display();
cout<<"--------------"<<endl;
sc.pop();
s.display();
sc.display();
cout<<"--------------"<<endl;
return 0;
}
