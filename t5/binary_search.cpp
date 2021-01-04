#include <iostream>
#include <stdlib.h>

using namespace std;
/*
This programs performs a binary search in a vector
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

    //Binary Search only works in sorted vectors, so we have to sort it first


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


    bool found = false;
    int x;
    cout<<"Enter a number to search-->"<<endl;
    cin>>x;
    int s=vector[vectorSize-1];
    int i=vector[0];
    int p;
    do
    {

        p=((vector[s]-vector[i])/2)+vector[i];
        cout<<"vector"<<vector[p]<<endl;
        if(vector[p]==x)
        {
            found=true;
        }
        else
        {
            if(x>vector[p])
            {
                i=p;
            }
            if(x<vector[p])
            {
                s=p;
            }
        }

    }while(found == false);

    if(found==true)
    {
        cout<<"The number "<<x<<" exist in the vector"<<endl;
    }
    else
    {
        cout<<"Cant found the number "<<x<<endl;
    }

    return 0;
}