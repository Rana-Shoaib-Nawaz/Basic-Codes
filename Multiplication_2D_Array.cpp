#include<iostream>
using namespace std;
main()
{
	int i,j,k,row1,column1,row2,column2;
	cout<<"Enter the row1 :";
	cin>>row1;     //Getting the value of row1
	cout<<"Enter the column1 :";
	cin>>column1;   //Getting the value of column1
	cout<<"Enter the row2 :";
	cin>>row2;    //Getting the value of row2
	cout<<"Enter the column2 :";
	cin>>column2;   //Getting the value of column2
	int array1[row1][column1];    //Declaration of array1
	int array2[row2][column2];   //Declaration of array2
	int mul[row1][column2];
	if(row1==row2&&column1==column2)  //If condition restricted that row1 must equal to row2 and column1 must equal to column2
	{
	cout<<"Matrix 1\n";
	for(i=0;i<row1;i++)     //Outer loop
	{
		for(j=0;j<column1;j++)  //Inner loop
		{
			cin>>array1[i][j];   //Getting the value of array1
		}
	}
	cout<<"\nMatrix 2\n";
		for(i=0;i<row2;i++)    //Outer loop
	{
		for(j=0;j<column2;j++)   //Inner loop
		{
			cin>>array2[i][j];   //Getting the value of array2
		}
	}
	cout<<"Matrix1:\n";
	for(i=0;i<row1;i++)    //Outer loop
	{
		for(j=0;j<column1;j++)   //Inner loop
		{
			cout<<array1[i][j]<<"\t";   //Getting the value of array2
		}
		cout<<endl;
	}
	cout<<"Matrix2:\n";
	for(i=0;i<row2;i++)    //Outer loop
	{
		for(j=0;j<column2;j++)   //Inner loop
		{
			cout<<array2[i][j]<<"\t";   //Getting the value of array2
		}
		cout<<endl;
	}
	
	cout<<"\nMultiplication\n";
	for(i=0;i<row1;i++)    //Outer loop
	{
		for(j=0;j<column1;j++)  //Inner loop
		{
		    mul[i][j]=0;
			for(k=0;k<column1;k++)
			{
				mul[i][j]+=array1[i][k]*array2[k][j]; //Multiplication the values
			}
			cout<<mul[i][j]<<"\t";
		}
		cout<<endl;
	}
		
}
else
cout<<"Enter the unequal matrix";   //If condition false than cout that
}
