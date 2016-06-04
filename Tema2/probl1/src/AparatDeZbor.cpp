#include "AparatDeZbor.h"

AparatDeZbor::AparatDeZbor()
{
	speed = 0;
	numar_maxim_pasageri = 0;
	//prod = NULL;
}

AparatDeZbor::AparatDeZbor(int speed, int numar_maxim_pasageri, char* prod)
{
	this->speed = speed;
	this->numar_maxim_pasageri = numar_maxim_pasageri;
	if(prod != NULL)
	{
		this->prod = new char[strlen(prod)];
		strcpy(this->prod, prod);
	}
}


void AparatDeZbor::afisare()
{
	cout<<"speed:"<<speed<<" "<<", numar max pasageri:"<<numar_maxim_pasageri<<", prod:"<<prod<<endl;
}

int AparatDeZbor::getSpeed()
{
	return speed;
}

char* AparatDeZbor::getProd()
{
    return prod;
}

bool AparatDeZbor::operator>(const AparatDeZbor& aparat2)
{
	if(strcmp(this->prod, aparat2.prod)>0)
		return true;
	else
		return false;
}

AparatDeZbor::~AparatDeZbor()
{

	if(prod != NULL)
	{
		delete[] prod;
	}
}

