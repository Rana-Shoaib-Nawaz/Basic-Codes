//Factorial
#include<iostream>
using namespace std;
main()
{
	int number,y,sum,i;
	sum=1;
	cout<<"Enter the number :";
	cin>>number;
	y=number;//number assign to y
	for(i=0;i<y;i++)
	{
		sum=number*sum;//it multiply
		number--;//using decrement
	}
	cout<<"Factorial="<<sum;
}
