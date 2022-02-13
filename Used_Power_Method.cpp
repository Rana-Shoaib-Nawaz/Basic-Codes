#include <iostream>
#include <cmath>
using namespace std;
main()
{
	double value1, value2, value3;
	cout<<"Enter the number : ";
	cin>>value1;
	value2 = 2 * pow(value1 , 2.0);
	value3 = 3 + value2 / 2 - 1;
	cout<<"Value="<<value3;
	return 0;
}
/*
If the user enter 2 then the result will be =6
If the user enter 5 then the result will be =27
if the user enter 4.3 then the result will be =20.49
If the user enter 6 then the result will be =38
*/
