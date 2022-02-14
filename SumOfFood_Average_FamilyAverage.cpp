#include<iostream>
using namespace std;
main()
{
	int i,j,amount=0,sum2=0;
    double food[3][7];      //Declaration of array name of food
	double sum[7];         //Declaration of array name of sum
	double average[7];     //Declaration of array name of average
	double min;
	double max;
	int row1,column1,row2,column2;
	for(i=0;i<3;i++)     //Outer loop
	{
		for(j=0;j<7;j++)   //Inner loop
		{
			cout<<"Enter the food of monkey "<<i+1<<" for day "<<j+1<<" :";
			cin>>food[i][j];      //Getting the foods in array
			sum[i]+=food[i][j];   //Sum the value of food
		}
	}	
	for(i=0;i<3;i++)    //Starting the value
	{
			cout<<endl<<"\nSum of foods "<<sum[i];
			sum2=sum2+sum[i];    //Sum the food of the monkey per week
			average[i]=sum[i]/7; //Getting the averge of the monkey per week
			cout<<"\nAverage of foods "<<average[i];	
	}
		amount=(sum2/7); //Getting the average of the whole family
		cout<<endl<<" Family average foods per day "<<amount<<endl;
	
	max=food[0][0];     //max assign the 0 index of food
	for(i=0;i<3;i++)    //Outer loop
	{
		for(j=0;j<7;j++)  //Inner loop
		{
			if(max<food[i][j])	  //If the max is smaller of the food
			{
				max=food[i][j];  //The value of the food assign to max
				row1=i+1;        //Increment is used to determine the monkey
				column1=j+1;    //Increment is used to determine the day
			}		
		}
	}
	min=food[1][1];     //Min is assign the first index of the food
	for(i=0;i<3;i++)   //Outer loop
	{
		for(j=0;j<7;j++)  //Inner loop
		{
			if(min>food[i][j])	//If the min is greater than food
			{
				min=food[i][j];  //The value of food assign to the min
				row2=i+1;        //The increment is used to determine the monkey
				column2=j+1;     //The increment is used to determine the day
			}		
		}
	}
	cout<<" \nMaximum Food has eaten by monkey "<<row1<<" on day "<<column1<<" which is :"<<max<<"pounds.\n";
	cout<<" \nMinimum F ood has eaten by monkey "<<row2<<" on day "<<column2<<" which is :"<<min<<"pounds.";
}
