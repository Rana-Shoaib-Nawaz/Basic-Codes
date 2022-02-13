#include<iostream>
using namespace std;
main()
{
	int c,sum,e,i;
	c=1;
	sum=0;
	cout<<"Enter the number :";
	cin>>e;
	for(i=0;i<5;i++)//it loop run when enter negative number
	{
		if(e<1)
		{
		cout<<"Enter the incorrect number try again:"<<endl;
		cout<<"Enter the number :";
		cin>>e;
		}
	}
	while(c<=e)//this loop run until c is not equal to e
	{
		cout<<"\n"<<c;
		sum=sum+c;//it sum the value
		c=c+1;//it inrement tha value
	}
		cout<<"\nSum="<<sum;
}
