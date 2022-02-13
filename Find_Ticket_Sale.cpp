#include<iostream>
using namespace std;
main()
{
	double classA,classB,classC,seatA,seatB,seatC,ticket_sale;
	classA=2000;
	classB=1000;
	classC=500;
	cout<<"Enter the classA seats :";
	cin>>seatA;
	cout<<"Enter the classB seats :";
	cin>>seatB;
	cout<<"Enter the classC seats :";
	cin>>seatC;
	ticket_sale=(classA*seatA)+(classB*seatB)+(classC*seatC);
	cout<<"Ticket Sale="<<ticket_sale;
	return 0;
}
