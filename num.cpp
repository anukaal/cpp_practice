//C++ Program
// number is positive or negative
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number: ";
    int check;
    cin>>check;
    //input is 0
    if(check==0)
    {
        cout<<"0 is neither positive nor negative";
    }
    //checking whether the number is positive or negative
    else if(check>0)
    {
        cout<<check<<" is a positive number";
    }
    else
    {
        cout<<check<<" is a negative number";
    }
    return 0;
}