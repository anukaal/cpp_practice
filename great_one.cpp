//C++ Program
//Greatest of three numbers
#include<iostream>
using namespace std;
//main program
int main()
{
    int first, second, third;
    cout<<"Enter first number: ";
    cin>>first;
    cout<<"Enter second number: ";
    cin>>second;
    cout<<"Enter third number: ";
    cin>>third;
    //comparing first with other numbers
    if((first >= second) && (first >= third))
    {
        cout<<first<<" is the greatest";
    }
    //comparing Second with other numbers
    else if((second >= first) && (second >= third))
    {
        cout<<second<<" is the greatest";
    }
    else
    {
        cout<<third<<" is the greatest";
    }
    return 0;
}