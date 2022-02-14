#include<iostream>
using namespace std;
int main()    // Main function
{        
    int Number1, Number2, Number3, Number4, Number5,CorrectAnsPercentage, correctAns, incorrectAns;  // Declaring Variables
    correctAns=0;   // Assign
    incorrectAns=0; // Assign
    cout<<"\nA. Is 3.14 integer?";
    cout<<"\n1. Yes"<<"\n2. No"<<"\n3. May be"<<endl;
    cout<<"Enter Your Answer:";
    cin>>Number1;
    if(Number1==2)
	{
    	cout<<"Congratulations! You have entered correct Answer";
    	correctAns++;
    }
	else
	{
    	cout<<"Your Answer is wrong!"<<endl;
    	incorrectAns++;
    }
    cout<<endl;
    cout<<"\nB. In c++, the value of (14>7) is ?";
    cout<<"\n1. 7"<<"\n2. 14"<<"\n3. 15"<<"\n4. 6";
    cout<<"\nEnter Your Answer:";
    cin>>Number2;
    if(Number2==2)
	{
    	cout<<"Congratulations! You have entered correct Answer";
    	correctAns++;
    }
	else
	{
    	cout<<"Your Answer is wrong!"<<endl;
    	incorrectAns++;
    }
    cout<<endl;
    cout<<"\nC. What is the result of the following expression? ";
    cout<<"    1025==1025";
    cout<<"\n1. True"<<"\n2. False"<<"\n3. Both"<<"\n4. None of these";
    cout<<"\nEnter Your Answer:";
    cin>>Number3;
    if(Number3==1)
	{
    	cout<<"Congratulations! You have entered correct Answer";
    	correctAns++;
    }
	else
	{
    	cout<<"Your Answer is wrong!";
    	incorrectAns++;
    }
    cout<<endl;
    cout<<"\nD) The operater that combines two conditions into a single bolean value that the condition will only be true if the both of the conditions are true!";
    cout<<"\n1. $$"<<"\n2. оо"<<"\n3. ||"<<"\n4. &&";
    cout<<"\nEnter Your Answer:";
    cin>>Number4;
    if(Number4==4)
	{
    	cout<<"Congratulations! You have entered correct Answer";
    	correctAns++;
    }
	else
	{
    	cout<<"Your Answer is wrong!";
    	incorrectAns++;
    }
    cout<<"\nE) The operater that combines two conditions into a single bolean value that the condition will only be true if the at least one of the conditions is true!";
    cout<<"\n1. $$"<<"\n2. оо"<<"\n3. ||"<<"\n4. &&";
    cout<<"\nEnter Your Answer:";
    cin>>Number4;
    if(Number5==3)
	{
    	cout<<"Congratulations! You have entered correct Answer";
    	correctAns++;
    }
	else
	{
    	cout<<"Your Answer is wrong!";
    	incorrectAns++;
    }
    cout<<"\nCorrect Answers:"<<correctAns<<"\nIncorrect Answers:"<<incorrectAns;
    CorrectAnsPercentage=(correctAns*100)/5;
    cout<<"\nCorrectAns Percentage:"<<CorrectAnsPercentage;
}
