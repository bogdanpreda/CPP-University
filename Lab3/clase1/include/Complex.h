#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	int re, im;
public:
	Complex();
	Complex(int,int);
	Complex(const Complex &);
	~Complex();
};


#endif // COMPLEX_H
