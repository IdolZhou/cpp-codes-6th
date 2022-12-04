// 7.19 arfupt.cpp -- an arrary of function pointers
#include <iostream>

using namespace std;

const double *f1(const double *ar, int n);
const double *f2(const double ar[], int n);
const double *f3(const double ar[], int n);

int main(void)
{
    double av[3] = {1112.3, 1542.6, 2227.9};

    // p1: pointer to a function
    // (*p1）== f1
    const double *(*p1)(const double *, int) = f1;
    // C++11 automatic type deduction
    // const double *(*p2)(const double *, int) = f2;
    auto p2 = f2;
    cout << "Using pointers to functions: " << endl;
    cout << "Address\t\t\tValue" << endl;
    // (*p1)(av, 3) == f1(av, 3)
    cout << (*p1)(av, 3) << ": \t\t" << *(*p1)(av, 3) << endl;
    // p2 == (*p2)   p2(av, 3) == f2(av, 3)
    cout << p2(av, 3) << ": \t\t" << *p2(av, 3) << endl;
    cout << "------------------------------" << endl;
    // pa(pb) is an array of pointers
    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    auto pb = pa;

    for (int i = 0; i < 3; i++)
    {
        cout << pa[i](av, 3) << ": \t\t" << *pa[i](av, 3) << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << pb[i](av, 3) << ": \t\t" << *pb[i](av, 3) << endl;
    }
    cout << "------------------------------" << endl;

    // pc is a pointer to an array of function pointers
    // C++11 can use the following code instead
    // const double *(*(*pc)[3])(const double *, int) = &pa;
    auto pc = &pa;
    const double *(*(*pd)[3])(const double *, int) = &pa;
    // (*pc) == pa -->(*pc)[0](av,3) == pa[0](av,3)
    cout << (*pc)[0](av, 3) << ": \t\t" << *(*pc)[0](av, 3) << endl;
    // (*pd)[1](av,3)== pa[1](av,3) == f2(av,3)
    const double *pdb = (*pd)[1](av, 3);
    cout << pdb << ": \t\t" << *pdb << endl;
    return 0;
}

const double *f1(const double *ar, int n)
{
    return ar;
}

const double *f2(const double ar[], int n)
{
    return ar + 1;
}

const double *f3(const double ar[], int n)
{
    return ar + 2;
}