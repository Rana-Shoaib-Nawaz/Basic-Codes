#include<iostream>
using namespace std;
main()
{
	int colaries,fats;
	cout<<"Enter the fats :";
	cin>>fats;
	colaries=fats*9;
	colaries=colaries/9;
	if(colaries<0)
	cout<<"invalid number";
	else if(colaries>=30)    //It execute when colaries is more than 30%
	cout<<"Food has high fats";
	else                     //Otherwise it display
	cout<<"Food has low fats";
	return 0;
}
