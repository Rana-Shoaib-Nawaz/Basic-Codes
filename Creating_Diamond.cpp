//Creating diamond
#include<iostream>
using namespace std;
main()
{
	int r,i,j,x,k,m,f;
	m=1;
	cout << "Enter the number :";
	cin>>x;
	for(i=1;i<x;i++)//it run until i<x
	{
		for(j=x;j>=i;j--)//it decreases the blank spaces
		{
			cout<<" ";	
		}
		for(k=0;k<=j;k++)//it increases the stars
		{
			cout<<"* ";
		}

		cout<<endl;
	}
	for(i=2;i<x;i++)//it create the blank space
	{
		cout<<" ";
		for(m=0;m<i;m++)//it also create the blank space
		{
			cout<<" ";
		}
		for(f=x;f>m;f--)//it decreases the stars
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
