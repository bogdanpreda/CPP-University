#include <iostream>
#include <stdlib.h>
using namespace std;
void no_mem();
int main()
{
    int *ip;
    long dim;
    //set_new_handler(&no_mem);
    cout << "Dimensiune bloc: ";
    cin >> dim;
    for(int i=dim;; i++)
    {
        ip = new int[i];
        cout << "Alocare bloc i=" << i << endl;
    }
    return 0;
}
void no_mem()
{
    cout << "Alocare imposibila \n";
    exit(1);
}
