#include<iostream>
using namespace std;
main()
{
	int customer,customers,division;
	float percent,approximatelypercent,numbers;
	percent=14;
	approximatelypercent=64;
	customer=12467;
	division=100;
	customers=customer*percent/division;
	numbers=customer*approximatelypercent/division;
	cout<<"approximately number of customers="<<customers<<" approximately number of customers prefer citrus flavored="<<numbers;
	return 0;
}
