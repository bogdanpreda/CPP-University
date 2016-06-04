#include <iostream>

using namespace std;

bool cautare(int v[],int s,int d,int el)
{
    if(d<s)
        return false;
    else
    {
        int m = (s+d)/2;
        if(v[m] == el)
            return true;
        else
        {
            if(el<v[m])
            {
                cautare(v,s,m-1,el);
            }
            else
            {
                cautare(v,m+1,d,el);
            }
        }
    }
}
bool cautare_iterativ(int v[],int s,int d,int el)
{
    while(s<=d)
    {
        int m = (s+d)/2;
        if(v[m] == el)
            return true;
        else if(el<v[m])
        {
            d--;
        } else
        {
            s++;
        }
    }
    return false;
}
int main()
{
    int v[] = {1,2,3,4,5,6};
    cout<<cautare(v,0,5,5)<<endl;
    cout<<cautare_iterativ(v,0,5,8);
    return 0;
}
