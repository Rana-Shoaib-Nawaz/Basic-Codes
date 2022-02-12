#include <iostream>
#include<cmath>
using namespace std;
main ()
{
	int T,Principal;
	float interestRate,Rate,Amount,amount;
	T=12;
	Rate=4.25;
	cout<<"Enter your Principal ";
	cin>>Principal;
	amount=Principal*pow(1+Rate,T);
	interestRate=(Principal*Rate)/100;
	Amount=Principal+interestRate;
	cout<<"InterestRate "<<Rate<<"%"<<endl<<"Time compounded "<<T<<endl<<"Principal "<<Principal<<endl<<"InterestRate "<<interestRate<<endl<<"Amount in saving "<<Amount;
	return 0;
	
}
