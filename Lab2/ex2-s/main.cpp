#include <iostream>
#include <math.h>
using namespace std;

typedef struct
{
    int x;
    int y;
}Punct2d;
typedef struct
{
    int x;
    int y;
    int z;
}Punct3d;

void distanta(Punct2d p1, Punct2d p2)
{
    float d = sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
    cout<<"distanta: "<<d;
}
void distanta(Punct3d p1, Punct3d p2)
{

    float d = sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y)+(p2.z-p1.z)*(p2.z-p1.z));
    cout<<"distanta: "<<d;
}
void distanta(Punct2d *p)
{
    cout<<"P(x,y)=";
    cin>>p->x;
    cin>>p->y;
}
void distanta(Punct3d *p)
{
    cout<<"P(x,y,z)=";
    cin>>p->x;
    cin>>p->y;
    cin>>p->z;
}
void distanta(Punct2d p)
{
    cout<<"punct("<<p.x<<","<<p.y<<")"<<endl;
}
void distanta(Punct3d p)
{
    cout<<"punct("<<p.x<<","<<p.y<<","<<p.z<<")"<<endl;
}
int main()
{
    Punct2d p1,p2;
    distanta(&p1);
    distanta(&p2);
    distanta(p1,p2);
    return 0;
}
