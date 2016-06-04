
#ifndef BALON_H_
#define BALON_H_
#include "AparatDeZbor.h"

class Balon:public AparatDeZbor
{
protected:
	int greutate_maxima;
	int inaltime_maxima;
public:
	Balon();
	Balon(int, int, char*, int, int);
	void afisare();
	virtual ~Balon();
};

#endif /* BALON_H_ */
