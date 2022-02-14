//Using all loops
#include<iostream>
using namespace std;
main()
{
	int x,i,y,z,a,b,sum,m,sum1,w;
	i=0;
	w=0;
	char e=65;
	sum=0;
	m=1;
	sum1=0;
	cout<<"a.Enter the number :";
	cin>>x;
	cout<<"a.Enter the number :";
	cin>>z;
	a=x;//x assign to a
	b=z;//z assign to b
	cout<<"\nb.Odd number between first number and second number";
	while(x<z)
	{
		if(x%2!=0)//it give odd numbers
		{
			cout<<x<<",";
			sum1=sum1+x;
		}
		x=x+1;
	}
	{
		cout<<"\nc.sum of all even numbers=";
		while(a<b)
		{
			if(a%2==0)//it give even number
			{
				sum=sum+a;
			}
			a=a+1;
		}
		cout<<sum;
	}
	{
		cout<<"\nd.Squares between 1 to 10=";
		for(i=0;i<8;i++)
		{
			m=m+1;
			y=m*m;//it multiply the number and give square
			cout<<y<<",";
		}
	}
	cout<<"\ne.sum of all odd numbers square between first number and second number="<<sum1;
	cout<<"\nf.Output all uppercase letter=";
	do
	{
		cout<<e<<",";//it give the uppercase letter
		e++;
		w++;
	}
	while(w<26);
}
