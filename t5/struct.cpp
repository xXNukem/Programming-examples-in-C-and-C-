#include <iostream>
#include <stdlib.h>

/*
    This program shows the basic use of structure, wich are similar to what we will see in object oriented programmming
*/

struct friends
{
    char name[100];
    char telephone[9];
};

using namespace std;

int main()
{
    int x;
    cout<<"How many friends do you have?"<<endl;
    cin>>x;

    //You can declare a vector of structures, wich contains a structure per element, also you can have vectors inside the structure
    struct friends friendList[x];

    cout<<"Enter the info of your friends"<<endl;

    for (int i=0;i<x;i++)
    {
        //You can access an structure element using '.'
        cout<<"Name: ";
        cin>>friendList[i].name;
        cout<<"Telephone: ";
        cin>>friendList[i].telephone;
    }
    
    cout<<"This is your friend list:"<<endl;

    for(int i=0;i<x;i++)
    {
        cout<<"Name: "<<friendList[i].name<<endl;
        cout<<"Telephone: "<<friendList[i].telephone<<endl;
    }

    return 0;
}