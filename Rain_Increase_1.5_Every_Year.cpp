#include<iostream>
using namespace std;
main()
{
	int t,r,x,i;
	double y;
	r=2018;
	t=0;
	cout<<"Enter the number :";
	cin>>x;
	for(i=0;i<5;i++)//this loop run when enter negative number
	{
		if(x<1)
		{
		cout<<"You enter negative number try again"<<endl;
		cout<<"Enter the number :";
		cin>>x;
		}
	}
	while(t<x)//it run until t ia not equal to x
	{
	t=t+1;//it increment
	y=y+1.5;//it edition
	r=r+1;//it increment
	cout<<"\nmillimeter="<<y<<endl<<"years="<<r;
	}
}
