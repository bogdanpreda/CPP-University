

#ifndef APARATDEZBOR_H_
#define APARATDEZBOR_H_

#include <iostream>
#include <string.h>

using namespace std;
class AparatDeZbor
{
protected:
	int speed;
	int numar_maxim_pasageri;
	char* prod;
public:
	AparatDeZbor();
	AparatDeZbor(int, int, char*);
	int getSpeed();
	char* getProd();
	bool operator>(const AparatDeZbor& aparat2);
	virtual void afisare();
	virtual ~AparatDeZbor();
};

#endif /* APARATDEZBOR_H_ */
