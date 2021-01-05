#include <iostream>
#include <stdlib.h>

using namespace std;
/*
    This program shows how to get the diagonal from a matrix and copy it to a vector
*/

int main()
{

    int x,y;

    cout<<"Enter the number of rows:"<<endl;
    cin>> x;
    cout<<"Enter the number of columns:"<<endl;
    cin>> y;

    if(x!=y)
    {
        cout<<"You cant get the diagonal from a non squared matrix"<<endl;
        return 0;
    }

    int matrix[x][y];
    //reading the matrix from the keyboard
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<"Position ["<<i<<"]"<<"["<<j<<"]:";
            cin>>matrix[i][j];
        }
    }

    //Showing the matrix to the user
    cout<<"Your matrix is:"<<endl;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<"["<<matrix[i][j]<<"]";
        }
        cout<<endl;
    }

    //The matrix is squared so the vector in wich we will store the diagonal will have the same size as rows or columns
    int diagonal[x];

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(i==j)
            {
                diagonal[i]=matrix[i][j];
            }
        }
    }

    cout<<"The diagonal is:"<<endl;

    for(int i=0;i<x;i++)
    {
        cout<<"["<<diagonal[i]<<"]";
    }


    return 0;
}