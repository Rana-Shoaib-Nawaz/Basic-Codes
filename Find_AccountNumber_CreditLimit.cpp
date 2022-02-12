#include<iostream>
using namespace std;
main()
{
	int acount_number,credit_limit,charge,new_balance;
	cout<<"Enter the acount number :";
	cin>>acount_number;
	cout<<"Enter the credit limit :";
	cin>>credit_limit;
	cout<<"Enter the charges :";
	cin>>charge;
	new_balance=credit_limit-charge;
	if(credit_limit>charge)   //It execute when the credit limit is larger
	cout<<"New balance="<<new_balance;
	else if(credit_limit<charge)  //otherwise it print
	cout<<"Acount number="<<acount_number<<endl<<"Credit limit="<<credit_limit<<endl<<"New balance="<<new_balance<<endl<<"Credit Limit Exceeded";
	return 0;
}
