

#include "Balon.h"

Balon::Balon()
{
	inaltime_maxima = 0;
	greutate_maxima = 0;
}

Balon::Balon(int speed, int numar_maxim_pasageri, char* prod, int greutate_maxima, int inaltime_maxima):AparatDeZbor(speed, numar_maxim_pasageri, prod)
{
	this->inaltime_maxima = inaltime_maxima;
	this->greutate_maxima = greutate_maxima;
}

void Balon::afisare()
{
	cout<<"speed:"<<speed<<" "<<", nr max pasageri:"<<numar_maxim_pasageri<<", prod:"<<prod<<", greutate_maxima:"<<greutate_maxima<<", inaltime_maxima:"<<inaltime_maxima<<endl;
}


Balon::~Balon()
{
	
}

