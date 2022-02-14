//The T triangle
#include<iostream>
using namespace std;
main()
{
	int i,j,number,m,y,n,d;
	y=0;//y assign 0
	d=7;//d assign 7
	cout<<"Enter the rows :";
	cin>>number;
	for(i=1;i<=number;i++)//it run until i is equal to x
	{
		for(m=0;m<d;m++)// it run until m is equal to d
		cout<<" ";
		for(n=0;n<y;n++)//it run until n is equal to y
		cout<<"T";
		for(j=0;j<i;++j)//it run until j is equal to i
		{
			cout<<"T";
		}
		y++;//increment
		d--;//decrement
		cout<<endl;
	}
}
