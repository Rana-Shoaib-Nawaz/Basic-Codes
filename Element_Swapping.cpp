//Element swapping
#include<iostream>
using namespace std;
main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};    //Given the array
    int temp;
    cout<<"Array\n";
    for(int i=0;i<10;i+=2)     //Loop run 5 times because it addition 2 after 2 iteration
 	{
    	temp=array[i];            //temp assign the value of array[i]
    	array[i]=array[i+1];     //array [i] assign the value of array[i+i]
    	array[i+1]=temp;         //After this it swap the value
    	cout<<array[i]<<temp;    //Print the value
 	}
}
