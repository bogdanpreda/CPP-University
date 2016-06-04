
#include "Avion.h"

Avion::Avion()
{
	persoane = 0;
	combustibil = 0;

}

Avion::Avion(int speed, int numar_maxim_pasageri, char* prod, int combustibil, int persoane):AparatDeZbor(speed, numar_maxim_pasageri, prod)
{
	this->persoane = persoane;
	this->combustibil = combustibil;
}

void Avion::afisare()
{
	cout<<"speed:"<<speed<<" "<<", nr max pasageri:"<<numar_maxim_pasageri<<", prod:"<<prod<<", combustibil:"<<combustibil<<", numar pasageri:"<<persoane<<endl;
}

Avion::~Avion()
{
	
}

