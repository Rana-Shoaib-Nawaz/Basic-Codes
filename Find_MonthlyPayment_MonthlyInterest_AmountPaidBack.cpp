#include<iostream>
#include<cmath>
using namespace std;
main()
{
	double anual_rate,rate,number_of_payment,loan,factor,payment,amount_paid,interest_paid;
	cout<<"Enter the anual payment :";
	cin>>rate;
	rate=rate/12;
	rate=rate/100;
	cout<<"Enter the number of payment :";
	cin>>number_of_payment;
	cout<<"Enter the loan :";
	cin>>loan;
	factor=pow(1+rate,number_of_payment);
	payment=((rate+factor)/(factor-1))*loan;
	amount_paid=number_of_payment*payment;
	interest_paid=amount_paid-loan;
	cout<<"Montly payment "<<payment<<endl<<"Monthly interestrate 1%"<<endl<<"Amount paid back "<<amount_paid<<endl<<"Interest paid "<<interest_paid;
	return 0;
}
