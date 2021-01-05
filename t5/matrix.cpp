#include <iostream>
#include <stdlib.h>

using namespace std;

/*
This program shows how to read and show a matrix to the user
*/
int main()
{

    int x,y;

    cout<<"Enter the number of rows:"<<endl;
    cin>> x;
    cout<<"Enter the number of columns:"<<endl;
    cin>> y;

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


    return 0;
}