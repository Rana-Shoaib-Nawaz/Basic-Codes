#include<iostream>
using namespace std;
main()
{
	double number1,number2,commission,commission1,commission2,profit;
	cout<<"Enter the number1 :";
	cin>>number1;
	number1=number1*1000;
	commission1=number1*2/100;
	cout<<"Enter the number2 :";
	cin>>number2;
	number2=number2*1000;
	commission2=number2*2/100;
	profit=number2-number1;
	commission=commission2-commission1;
	cout<<"Profit="<<profit<<endl<<"commission="<<commission<<endl<<"Kythrn lost on transaction";
	return 0;
}
