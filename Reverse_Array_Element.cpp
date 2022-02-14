//Reverse array element
#include<iostream>
using namespace std;
main()
{
   int size;
   cout<<"Enter the number :";
   cin>>size;
   int array[size];
   cout<<"Reverse\n";
   for(int i=0;i<1;i++)      //Loop run 1 time
 	{
   		for(int j=size;j>i;j--)  //In this loop the given number minus
   		cout<<j;                //print the j
 	}
}
