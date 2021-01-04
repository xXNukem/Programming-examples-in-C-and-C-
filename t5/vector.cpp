#include <iostream>
#include <stdlib.h>

using namespace std;
/*
This program shows how to declare and show a simple vector
*/

int main()
{
    int v[5]={1,2,3,4,5};

    for(int i=0;i<sizeof(v);i++)
    {
        cout<<v[i]<<",";
    }
    cout<<endl;
    return 0;
}