#include<iostream>
using namespace std;
main()
{
	int i,j,row,column;
	cout<<"Enter the row :";
	cin>>row;      //Getting the value of row
	cout<<"Enter the column :";
	cin>>column;    //Getting the value of column
	int array[row][column];     //Declaration of array
	for(i=0;i<row;i++)      //Outer loop
	{
		for(j=0;j<column;j++)   //Inner loop
		{
			cin>>array[i][j];     //Getting the value of array
		}
	}
	cout<<"Values in Matrix form:\n";
	for(i=0;i<row;i++)     //Outer loop
	{
		for(j=0;j<column;j++)    //Inner loop
		{
			cout<<array[i][j]<<"\t";   //Print the given values
		}
		cout<<endl;
	}
	cout<<"tranpose Matrix:\n";
	for(i=0;i<column;i++)    //Outer loop
	{
		for(j=0;j<row;j++)    //Inner loop
		{
			cout<<array[j][i]<<"\t";  //Print the transpose value 
		}
		cout<<endl;
	}
}
