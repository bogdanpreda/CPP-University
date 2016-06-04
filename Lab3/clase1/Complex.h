#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class Complex
{
	int re, im;
public:
	Complex();
	Complex(int,int);
	Complex(const Complex &);
	~Complex();
};


#endif // COMPLEX_H_INCLUDED
