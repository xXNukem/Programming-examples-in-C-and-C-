#include <iostream>
#include <stdlib.h>
#include <math.h>
/*
This program calculates the longitude of a vector in the Cartesian plane
*/

using namespace std;

int main()
{

    float x1,y1;
    float x2,y2;
    int x;

    do{
        cout<<"Enter coordinate x1-> ";
        cin>> x1;
        cout<<"Enter coordinate x2-> ";
        cin>> x2;

        cout<<"Enter coordinate y1-> ";
        cin>> y1;
        cout<<"Enter coordinate y2-> ";
        cin>> y2;

        cout <<"Calculating..."<<endl;

        float Px=x2-x1;
        float Py=y2-y1;

        float R=sqrt(pow(Px,2)+pow(Py,2));

        cout<<"Vector longitude: "<<R<<endl;

        cout<<"Type 1 to do it again, type other number to exit"<<endl;
        cin>>x;

    }while(x==1);

    cout<<"Bye Bye!!!"<<endl;

    return 0;
}