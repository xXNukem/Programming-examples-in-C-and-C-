#include <iostream>
#include <stdlib.h>

using namespace std;

/*
This program exchange two variables using pointers
*/

void exchange(int * u, int * v)
{
    int aux;

    aux=*u;
    *u=*v;
    *v=aux;
}

int main()
{
    int u,v;

    cout<<"Enter number u-->";
    cin>> u;

    cout<<"Enter number v-->";
    cin>> v;

    cout<<"Exchanging..."<<endl;

    exchange(&u,&v);

    cout<<"u: "<<u<<" v: "<<v<<endl;;

}