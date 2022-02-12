#include<iostream>
using namespace std;
main()
{
	int number;
	float tax,quartely_tax,anual_property_tax;
	tax=0.0264;
	cout<<"Enter the number :";
	cin>>number;
	anual_property_tax=number*tax;
	quartely_tax=anual_property_tax/4;
	cout<<"Anual property tax "<<anual_property_tax<<endl<<"Quartely tax "<<quartely_tax;
	return 0;
}
