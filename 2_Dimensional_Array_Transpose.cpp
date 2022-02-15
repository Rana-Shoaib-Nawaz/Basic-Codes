#include<iostream>
using namespace std;
int main()
{
	int Array[3][3];
	for(int i=0 ; i<3 ; i++)
	{
			for(int j=0 ; j<3 ; j++)
		{
			cout<<"Enter the "<<i<<" row and "<<j<<" column :";
			cin>>Array[i][j];
		}
	}
	cout<<"--------------------Before Transpose--------------"<<endl;
		for(int i=0 ; i<3 ; i++)
	{
			for(int j=0 ; j<3 ; j++)
		{
			cout<<Array[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"--------------------After Transpose--------------"<<endl;
			for(int j=0 ; j<3 ; j++)
	{
			for(int i=0 ; i<3 ; i++)
		{
			cout<<Array[i][j]<<"\t";
		}
		cout<<endl;
	}
	
}
