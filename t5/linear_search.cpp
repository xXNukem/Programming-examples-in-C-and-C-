#include <iostream>
#include <stdlib.h>

using namespace std;
/*
    This program perform a linear search on a vector
    This is less eficient than Binary search because the search can take too much time in large vectors
    But this can be performed on unsorted vectors
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

    int x;
    cout<<"Enter a number to search-->"<<endl;
    cin>>x;

    for(int i=0;i<vectorSize;i++)
    {
        if(vector[i]==x)
        {
            cout<<"The number "<<x<<" exist in the vector"<<endl;
            break;
        }
    }
}