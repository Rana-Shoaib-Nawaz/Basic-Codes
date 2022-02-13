#include<iostream>
using namespace std;

main()
{
	int sum,remainder,x,i;
	sum=0;
	cout<<"Enter the number :";
	cin>>x;
	for(i=0;i<5;i++)//it loop run when the user enter negative number
	{
		if(x<1)
		{
		cout<<"You enter negative number try again"<<endl;
		cout<<"Enter the number :";
		cin>>x;
		}
	}
	while(x!=0)//when x is not equal to zero
	{
		remainder=x%10;//taking modulus
		sum=sum+remainder;//adition
		x/=10;//division with x
	}
		cout<<"Sum="<<sum;
}
