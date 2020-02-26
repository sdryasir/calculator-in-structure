#include<iostream>
#include<string>
using namespace std;

struct calc{
	char op;
	int num1;
	int num2;
};

int add(calc c)
{
	cout<<"The sum is :"<<c.num1 + c.num2;
}
int sub()
{
	cout<<"The difference is :"<<a-b;
}
int mul()
{
	cout<<"The product is :"<<a*b;
}
int div()
{
	cout<<"The division is :"<<a/b;
}

int main()
{
	calc c;
	cout<<"Enter your choice";
	cin>>c.op;
	switch(c.op)
	{
		case '+':
			cout<<"Enter 1st Number";
			cin>>c.num1;
			cout<<"Enter 2nd Number";
			cin>>c.num2;
			add(c);
			break;
		case '-':
			sub();
			break;
		case '*':
			mul();
			break;
		case '/':
			div();
			break;
		default:
			cout<<"Invalid";
	}
		
}

