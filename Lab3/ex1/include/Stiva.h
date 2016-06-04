#ifndef STIVA_H
#define STIVA_H

class Stiva
{
    int *tab;
    int dim;
    int index;//varf
public:
    Stiva(int d=10);
    Stiva(const Stiva &);
    ~Stiva();
    //functie inline;
    bool isEmpty();
    bool isFull();
    int pop();
    void push(int);
    void display();

};
#endif // STIVA_H
