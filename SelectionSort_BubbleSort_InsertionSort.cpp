//Sorting
#include<iostream>
using namespace std;
main()
{
    int number,temp,j,i,minimum;
    cout<<"Enter the number :";
    cin>>number;
    int A[number];          //Array number is used to store the numbers
    cout<<"Array of selection sorting\n";
      
    
    for(i=0;i<number;i++)   
	{
		cout<<"Enter the value of array :";
		cin>>A[i];          //A[i] is used to store the given numbers
    }
    for(i=0;i<number;i++)
	{
		temp=i;           //temp assign to the i
    	for(j=i+1;j<number;j++)   //The loop start from j and toward numbers
		{
    		if(A[temp]>A[j])        //If condition check the A[temp] is greater the A[j]
			{
				temp=j;            //Temp assign the value j
    		}
   		}
		minimum=A[temp];     //Minimum is used to store the value of A[temp]
		A[temp]=A[i];       //A[temp] is used to store the value of A[i]
		A[i]=minimum;       //A[i] is used to store the value minimum
		cout<<A[i]<<"\t";   //Print the value of A[i]
	}
	
	cout<<"\nArray of bubble sorting :"<<endl;     //Starting the bubble sorting
	for(i=0;i<number;i++)       // Starting outer loop
	{
		for(j=i+1;j<number;j++)    //Starting inner loop
		{	
			if(A[i]>A[j])             //if conditon check that A[i] is greater than A[j]
			{
				temp=A[j];             //temp is used to store the value of A[j]
				A[j]=A[i];            //A[j] is used to store the value of A[i]
				A[i]=temp;            //A[i] is used to store the value of temp
			}
		}
		cout<<A[i]<<"\t";      //Print the value of A[i]
	}
	
	cout<<"\nArray of insertion sorting\n";      //Starting the insertion sorting
	for(i=0;i<number;i++)        //Starting the outer loop
	{
		temp=A[i];                  //temp is ued to store the value of A[i]
		for(j=i;A[j-1]>temp&&j>0;j--)   //Starting outer loop and the loop start from i and run when the condition is true
	{
	A[j]=A[j-1];           //A[j] is used to store the value of A[j-i]
	}
	A[j]=temp;           //A[j] is used to stor the value of temp
	}
	for(i=0;i<number;i++)     //loop is used to print the value of A[i]
	{
	cout<<A[i]<<"\t";
	}
}
