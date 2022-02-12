#include<iostream>
using namespace std;
main()
{
	int length1,area,length2,width1,width2,area1,area2,number;  //Enter the value in integer
	cout<<"Enter the length1 :";
	cin>>length1;
	cout<<"Enter the width1 :";
	cin>>width1;
	area1=length1*width1;      //After processing answer of area1
	cout<<"Enter the length2 :";
	cin>>length2;
	cout<<"Enter the width2 :";
	cin>>width2;
	area2=length2*width2;     //After processing answer of area2
	if(area1>area2)    //It execute when area1 is greater
	cout<<"Greater rectangle is area1="<<area1<<endl;
	else if(area1<area2)      //It execute when area2 is greater 
	cout<<"Greater rectangle is area2="<<area2<<endl;
	else if(area1==area2)    //It execute when area1 is equal to area2
	cout<<"Both rectangle are same";
	return 0;
}
