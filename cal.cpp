#include<iostream>
using namespace std;
int main()
{
	int num1,num2,result;
	char ch;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter any  operator [+,-,*,/,%]:";
	cin>>ch;
	cout<<"Enter second number : ";
	cin>>num2;
	if(ch=='+')
	{
		result=num1+num2;
		cout<<"Sum of two numbers="<<result;
	}
		else if(ch=='-')
	{
		result=num1-num2;
		cout<<"Subtracte of two numbers="<<result;
	}
	else if(ch=='*')
	{
		result=num1*num2;
		cout<<"Multipication of two numbers="<<result;
	}
	else if(ch=='/')
	{
		result=num1/num2;
		cout<<"division of two numbers="<<result;
	}
		else if(ch=='%')
	{
		result=num1%num2;
		cout<<"modulus of two numbers="<<result;
	}
	else
	{
		cout<<"end of the program";
	}
	return 0;
	
}
