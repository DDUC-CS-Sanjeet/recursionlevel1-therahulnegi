#include<iostream>
using namespace std;
int gcd recursive(int a, int b)
{
	if(a<0||b<0)
	    throw "Invalid Number!!!";
	if(b==0)
	    return a;
	else
	    return gcd recursive(b, a%b);
}
int gcd iterative(int a, int b)
{
	if(a<0||b<0)
	    throw "Invalid Number!!!";
	for(int temp=0; b!=0; )
	{
		temp=a;
		a=b; 
		b=temp%b;
	}
	return a;
}
int fact recursive(int num)
{
	if(num<0)
	    throw "Invalid Number!!!";
	if(num==0)
	    return 1;
	else 
	    return num*fact recursive(num-1);
}
int fact iterative(int num)
{
	if(num<0)
	    throw "Invalid Number!!!";
	int fact=1;
	for( ; num>0; num--)
	    fact*=num;
	return fact;
}
int power recursive(int b, int e)
{
	if(b==0)
	    throw "Invalid Base!!!";
	if(e!=0)
	    return b*power recursive(b, e-1);
	else 
	    return 1;
}
int power iterative(int b, int e)
{
	if(b==0)
	    throw "Invalid Base!!!";
	int power=1;
	for( ; e!=0; e--)
	    power*=b;
	return power;
}
int fibo iterative(int t)
{
	int a=0, b=1, c=0;
	if(t<0)
	    throw "Invalid Term!!!";
	if(t==0)
	    return 0;
	else if(t==1||t==2)
	    return t-1;
	else
    {
    	 for(int i=3; i<=t; i++)
        {
        	c=a+b;
        	a=b;
        	b=c;
		}
		return c;
	}   
}
int fibo recursive(int t)
{
	if(t<0)
	    throw "Invalid Term!!!";
	else if(t==0)
	    return 0;
	else if(t==1||t==2)
	    return t-1;
	else
	    return fibo recursive(t-1)+fibo_recursive(t-2);
}
int main()
{
	int num1, num2, num3, choice, base, exponent, term;
	char choice2;
	do
	{
			cout<<"----- Menu------"<<endl;
        	cout<<"1 - GCD"<<endl;
        	cout<<"2 - FACTORIAL"<<endl;
        	cout<<"3 - POWER"<<endl;
        	cout<<"4 -  FIBONACCI SERIES"<<endl;
        	cout<<"CHOOSE YOUR OPTION : ";
        	cin>>choice;
        	system("cls");
        	switch(choice)
        	{
        		case 1: try
                        {
                        cout<<"Enter two numbers to find their GCD: \n";
        		        cin>>num1>>num2;
        		        cout<<"GCD recursive function: "<<gcd recursive(num1, num2)<<endl;
        		        cout<<"GCD  iterative function: "<<gcd iterative(num1, num2)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		case 2: try
        		        {
        		        cout<<"Enter the number to find its factorial: \n";
        		        cin>>num3;
        		        cout<<"Factorial  recursive function: "<<fact recursive(num3)<<endl;
        		        cout<<"Factorial  iterative function: "<<fact iterative(num3)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		case 3: try
        		        {
        		        cout<<"Enter the base and exponent to find the value: \n";
        		        cin>>base>>exponent;
        		        cout<<"Value recursive function: "<<power recursive(base, exponent)<<endl;
        		        cout<<"Value iterative function: "<<power iterative(base, exponent)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		case 4: try
        		        {
        		        cout<<"Enter the term to find the Fibonacci Number: \n";
        		        cin>>term;
        		        cout<<"Series  recursive function: "<<fibo recursive(term)<<endl;
        		        cout<<"Series  iterative function: "<<fibo iterative(term)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		default: cout<<"Wrong choice of option!!!";
        	}
        	cout<<"Do you want to continue more (Y/N): ";
        	cin>>choice2;
        	system("cls");
	}while(choice2=='Y'||choice2=='y');
	return 0;
}
