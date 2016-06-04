#include <iostream>
#include <string.h>
#include "include/Complex.h"
using namespace std;
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
int main()
{
    cout << "Hello world!" << endl;
    Complex c1,c2(2,3),c3=c1,c4(c2);


    char *n;
    n = strrev("ana are 5 mere");
    cout<<n;
     return 0;
}
