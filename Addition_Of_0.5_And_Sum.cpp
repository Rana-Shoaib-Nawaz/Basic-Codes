#include<iostream>
using namespace std;
main()
{
	int n,t,y,z,i;
	double a,r,sum;
	a=0.5;
	r=0.5;
	t=0;
	cout<<"Enter the number :";
	cin>>n;
	for(i=0;i<5;i++)//it run when the number is negative
	{
		if(n<1)
		{
		cout<<"You enter the negative number try again"<<endl;
		cout<<"Enter the number :";
		cin>>n;
		}
	}
		while(t<n)//it run until t is not equal to n
		{
		t=t+1;//it increment
		sum=sum+a;//it addition the value
		cout<<"Addition the value="<<sum<<endl;
		a=a*r;//it multiply
		}
		cout<<"sum="<<sum;
}
