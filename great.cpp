//C++ program
//Greatest of two numbers
#include<iostream>
using namespace std;
//main program
int main()
{
    int first,second;
    cout<<"Enter the 2 numbers: ";
    cin>>first>>second;
    if(first==second)
    {
        cout<<"both are equal";
    }
    else if(first>second)
    {
        cout<<first<<" is greater than "<<second;
    }
    else
    {
        cout<<second<<" is greater than "<<first;
    }
    return 0;
}
