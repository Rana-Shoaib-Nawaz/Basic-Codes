//Barchart
#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e,i;
	cout<<"Enter the points Ali :";
	cin>>a;
	cout<<"Enter the points Foo :";
	cin>>b;
	cout<<"Enter the points Cal :";
	cin>>c;
	cout<<"Enter the points Dan :";
	cin>>d;
	cout<<"Enter the points Zoo :";
	cin>>e;
	cout<<"Points For Game :"<<"\nAli : ";
	{
		for(i=0;i<a;i++)//it run until i is equal to a
		{
			cout<<"*";
		}
		cout<<"\nFoo : ";
	}
	{
		for(i=0;i<b;i++)//it run until i is equal to b
		{
			cout<<"*";
		}
		cout<<"\nCal : ";
	}
	{
		for(i=0;i<c;i++)//it run until i is equal to c
		{
			cout<<"*";
		}
		cout<<"\nDan : ";
	}
	{
		for(i=0;i<d;i++)//it run until i is equal to d
		{
			cout<<"*";
		}
		cout<<"\nZoo : ";
	}
	{
		for(i=0;i<e;i++)//it run until x is equal to e
		{
			cout<<"*";
		}
	}
}
