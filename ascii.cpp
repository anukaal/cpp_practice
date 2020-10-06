//C++ program to calcualte ASCII value of Character
#include<iostream>
using namespace std;

//main program
int main()
{
	char val;
	cout<<"PLease provide the character"<<endl; // prompt for entering character
	cin>>val;

//printing the ASCII value of input 
 //through typecasting

cout<<"The ASCII value of "<<val<<" is "<<(int)val; 
return 0;
}
