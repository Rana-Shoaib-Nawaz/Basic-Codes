#include<iostream>
using namespace std;
main()
{
	double mass,weight;    //Enter the value in double
	cout<<"Enter the mass :";
	cin>>mass;
	weight=mass*9.8;
	if(weight<1000)        //It execute when the value is small than 1000
	cout<<"Object is too light";
	else                  //Otherwise it display
	cout<<"Oject is too heavy";
	return 0;
}
