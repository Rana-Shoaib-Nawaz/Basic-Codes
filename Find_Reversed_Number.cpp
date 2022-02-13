#include<iostream>
using namespace std;

main()
{
	int reversed_number,remainder,x,i;
	reversed_number=0;
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
		reversed_number=reversed_number*10+remainder;
		x/=10;//division with x
	}
		cout<<"Reversed number="<<reversed_number;
}
