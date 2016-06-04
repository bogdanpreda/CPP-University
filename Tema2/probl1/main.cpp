#include <iostream>
#include <typeinfo>
#include "AparatDeZbor.h"
#include "Balon.h"
#include "Avion.h"
using namespace std;

int main()
{

	int numar_obiecte = 6;
	AparatDeZbor** aparat = new AparatDeZbor*[numar_obiecte];

    aparat[0] = new AparatDeZbor(700, 2, "SUA");
	aparat[1] = new Balon(32, 5, "France", 400, 200);
	aparat[2] = new Balon(66, 4, "Germany", 230, 300);
	aparat[3] = new Avion(500, 421, "England", 1000, 300);
	aparat[4] = new Avion(255, 333, "England", 700, 150);
	aparat[5] = new AparatDeZbor(120, 5, "Romania");

	int k = 0;
	for(int i = 0;i < numar_obiecte; i++)
	{
		aparat[i]->afisare();

		if(strstr(typeid(*aparat[i]).name(), "Balon"))
			k++;
	}

	cout<< "in lista sunt "<<k<<" baloane\n";

	int viteza_mai_mare;
	cout<<"Introduceti o viteza";
	cin>>viteza_mai_mare;
	cout<<"Viteza mai mare decat "<<viteza_mai_mare<<endl;

	for(int i = 0;i < numar_obiecte; i++)
	{
		if(aparat[i]->getSpeed() > viteza_mai_mare)
			aparat[i]->afisare();
	}
	cout<<"Lista sortata: "<<endl;
	for(int i = 0; i < numar_obiecte-1; i++)
	{
		for(int j = i+1; j < numar_obiecte; j++)
		{

			if(*aparat[i] > *aparat[j])
			{
                AparatDeZbor* temp;
                temp = aparat[i];
                aparat[i] = aparat[j];
                aparat[j] = temp;
			}
		}
	}
	for(int i = 0; i < numar_obiecte; i++)
    {
        aparat[i]->afisare();
    }
	for(int i = 0;i < numar_obiecte; i++)
	{
		delete aparat[i];
	}
	delete[] aparat;

	return 0;
}
