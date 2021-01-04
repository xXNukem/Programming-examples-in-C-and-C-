#include <iostream>
#include <stdlib.h>

using namespace std;

/*
This program shows how to read a vector and define its size
then, shows how to sort the components.
*/

int main()
{
    int vectorSize;
    cout<<"Enter the vector size--> "<<endl;
    cin>> vectorSize;

    int vector[vectorSize];

    //reading the vector components
    cout<<"Enter vector components--> "<<endl;
    for(int i=0;i<vectorSize;i++)
    {
        int x;
        cin>>x;
        vector[i]=x;
    }

    //shows unsorted vector
    cout<<"Unsorted vector:"<<endl;
    for(int i=0;i<vectorSize;i++)
    {
        cout<<vector[i]<<",";
    }
    cout<<endl;
    //sorting the vector

    for(int i=0;i<vectorSize;i++)
    {
        for(int j=0;j<vectorSize-1;j++)
        {
            int aux;
            
            if(vector[j]>vector[j+1])
            {
                aux=vector[j];
                vector[j]=vector[j+1];
                vector[j+1]=aux;
            }
        }
    }

    cout<<"Sorted vector:"<<endl;

    for(int i=0;i<vectorSize;i++)
    {
        cout<<vector[i]<<",";
    }


    return 0;
}