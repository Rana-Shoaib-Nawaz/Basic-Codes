//Fibonacci series
#include<iostream>
using namespace std;
main()
{
	int x,a,b,c,i;
	a=0;
	b=1;
	c=0;
	cout<<"Enter the number :";
	cin>>x;
	x=x-2;
	cout<<"Fibonacci series="<<a<<","<<b;
	for(i=0;i<x;i++)
	{
		c=a+b;//addition the number
		a=b;//b assign a
		b=c;//c assign b
		cout<<","<<c;
	}
}
