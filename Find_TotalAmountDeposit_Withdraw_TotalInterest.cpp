#include<iostream>
using namespace std;
main()
{
	int x,y,z,diposited_amount,withdraw_amount,i,a,b,total_amount;
	diposited_amount=0;
	withdraw_amount=0;
	double interest;
	cout<<"Enter the starting balance :";
	cin>>x;
	cout<<"Enter the annual interest :";
	cin>>y;
	cout<<"Enter the number of month was established :";
	cin>>z;
	for(i=0;i<5;i++)//it loop run when the user enter negative number
	{
		if(y<1)
		{
			cout<<"You enter negative number try again"<<endl;
			cout<<"Enter the starting balance :";
			cin>>x;
		}
	}
	for(i=0;i<5;i++)//it loop run when the user enter negative number
	{
		if(x<1)
		{
			cout<<"You enter negative number try again"<<endl;
			cout<<"Enter the annual interest :";
			cin>>y;
		}
	}
	for(i=0;i<5;i++)//it loop run when the user enter negative number
	{
		if(z<1)//it loop run when the user enter negative number
		{
			cout<<"You enter negative number try again"<<endl;
			cout<<"Enter the number of month was established :";
			cin>>z;
		}
	}
	{
		for(i=0;i<z;i++)//it loop work until i is not equal to z
		{
			cout<<"Enter the amount diposited :";
			cin>>a;
			diposited_amount=x+a+diposited_amount;
			diposited_amount=diposited_amount-x;
			cout<<"Enter the amount withdraw :";
			cin>>b;
			withdraw_amount=withdraw_amount+b;
			if(a<1||b<1)//it break the statement when enter negative number
			{
				cout<<"account has been closed";
				break;
			}
		}
	}
	diposited_amount=diposited_amount+x;
	interest=diposited_amount/12;
	cout<<"\nThe total amount of diposited="<<diposited_amount<<"\nThe total amount of withdraw="<<withdraw_amount<<"\nThe total interest="<<interest;
}
