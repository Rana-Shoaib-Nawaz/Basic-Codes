#include<iostream>
using namespace std;
main()
{
	int number1;
	cout<<"Enter the number :";
	cin>>number1;
	if(number1%2==0) //Taking modulus
	cout<<number1<<" is even";
	else
	cout<<number1<<" is odd";
	return 0;
}
