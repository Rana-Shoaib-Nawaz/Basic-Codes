#include<iostream>
using namespace std;
main()
{
	double maximum_amount,used_amount,remaining_amount;
	cout<<"Enter the maximum amount :";
	cin>>maximum_amount;
	cout<<"Enter the used amount :";
	cin>>used_amount;
	remaining_amount=maximum_amount-used_amount;
	cout<<"Remaining amount="<<remaining_amount;
	return 0;
}
