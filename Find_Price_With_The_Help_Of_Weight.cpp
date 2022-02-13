#include<iostream>
using namespace std;
main()
{
	int weight;
	cout<<"Enter the weight :";
	cin>>weight;
	if(weight<0||weight>20)
	cout<<"invalid number";
	else if(weight<=2)   //It execute when weight is less than 2
	cout<<"Rs.50";
	else if(weight<=6)   //It execute when weight is less than 6
	cout<<"Rs.100";
	else if(weight<=10)  //It execute when weight is less than 10
	cout<<"Rs.150";
	else if(weight<20)   //It execute when the weight is than 20
	cout<<"Rs.200";
	return 0;
}
