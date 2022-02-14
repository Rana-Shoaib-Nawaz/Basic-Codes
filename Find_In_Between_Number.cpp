//In between numbers
#include<iostream>
using namespace std;
main()
{
	int x,i,y,z;
	cout<<"Enter the number :";
	cin>>x;
	cout<<"Enter the number :";
	cin>>z;
	if(x<z)//it run when x is less than z
	{
		for(i=0;x<z;i++)//it run until x is equal to z
		{
			x=x+1;//Addition
			cout<<x<<"\t";
		}
	}
	if(z<x)//it run ehen z is less than x
	{
		for(i=0;z<x;i++)//it run until z is equal to x
		{
			z=z+1;//Addition
			cout<<z<<"\t";
		}
	}
}
