#include <iostream>
#include <stdlib.h>

using namespace std;

extern int b=5;
//this is an extern variable, wich is defined outside of the function
//extern variables are global and they stay in memory during the execution of the program
//you can access an extern variable all across the code in the same file

int f1()
{
    static int n=0;
    //static variables are permanent and local
    //they cant be referenced, but they keep their values between calls
    //memory alloc persist all across the execution like a global variable
    n++;
    return n;
}

int main()
{

    int a=3;
    cout<<a<<endl;
    getchar();
    //by default, all variables are auto, you can specify auto type in C, like auto int a=3
    //auto variables are always local
    //you can use the same identifier in different functions

    cout<<b<<endl;
    getchar();

    int a;
    a=f1();
    cout<<a<<endl;
    a=f1();
    cout<<a<<endl;

    getchar();

    return 0;
}