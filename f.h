#ifndef F_H_INCLUDED
#define F_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

struct Derevo
{   int ves;
    int x;
    Derevo *left = NULL;
    Derevo *right = NULL;
};

void Add(Derevo **u, int &a);
Derevo* ves2(Derevo *root,int &d);
Derevo* Find(Derevo *u, int &a, Derevo **prev);
void Delete(Derevo **u, int &a);
void show(Derevo *t, int n);


#endif // F_H_INCLUDED
