#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int n ,N=0, a ,r=0;
	cout<<"Enter any Binary number : ";
	cin>>n;
	while(n!=0)
	{
		a=n%10;//using modulus
		r=(a*pow(2,N++))+r;//using formula
		n=n/10;//division operator use
	}
	cout<<"The decimal value of given Binary number is : "<<r;
}
