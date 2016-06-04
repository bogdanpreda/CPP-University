

#ifndef AVION_H_
#define AVION_H_
#include "AparatDeZbor.h"
class Avion:public AparatDeZbor
{
protected:
	int combustibil;
	int persoane;
public:
	Avion();
	Avion(int speed, int numar_maxim_pasageri, char* prod, int combustibil, int persoane);
	void afisare();
	virtual ~Avion();
};

#endif /* AVION_H_ */
