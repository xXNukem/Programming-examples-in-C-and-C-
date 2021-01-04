#include <iostream>
#include <stdlib.h>
#include <math.h>

#define IVA 0.16

using namespace std;

/*

This program calculates the IVA of an invoice
*/

int main()
{

    int taxBase;
    float total;
    int x;

    do{

        cout<<"Enter Tax Base--> ";
        cin>>taxBase;

        total=taxBase+taxBase*IVA;

        cout<<"You have to pay "<<total<<"$"<<endl;

        cout<<"Type 1 to do it again, type other number to exit"<<endl;
        cin>>x;

    }while(x==1);

    return 0;
}