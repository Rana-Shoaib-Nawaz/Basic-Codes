#include<iostream>
using namespace std;
main()
{
	int i,j,x;
	cout<<"Enter the rows :";
	cin>>x;
	for(i=1;i<=x;i++)//it run until is not equal to x
	{
		for(j=0;j<i;++j)//it run until j is not equal to i
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
