#include<iostream>
using namespace std;
main()
{
	float weight,height,BMI;    //Enter the value in float
	cout<<"Enter the weight :";
	cin>>weight;
	cout<<"Enter the height :";
	cin>>height;
	height=height*height;
	BMI=(weight*703)/height;
	if(BMI<18.5)     //It execute when value is less than 18.5
	cout<<"Underweight";
	else if(BMI>18.5 && BMI<25)   //It execute when value is under 18.5 or 25
	cout<<"Optimal";
	else if(BMI>25)     //It execute when value is greater than 25
	cout<<"Overweight";
	return 0;
}
