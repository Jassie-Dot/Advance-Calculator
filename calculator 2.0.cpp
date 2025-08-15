#include<iostream>
#include<string>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << endl;
	cout << "Welcome to the calculator, " << name << endl;
	cout << endl;
	cout << endl;
	while(true)
	{
		string operation;
		cout << "Press x to exit.." << endl;
		cout << "Enter the operation you want to persue(+,-,*,/,sqrt,pow,max,min): ";
		cin >> operation;
		cout << endl;
		if (operation == "x" || operation == "X")
		{
			break;
		}
		else
		{
			float a, b;
			cout << "Enter the value of 1st number: ";
			cin >> a;
			cout << "Enter the value of 2nd number: ";
			cin >> b;
			cout << endl;
			cout << "Number 1: " << a << endl;
			cout << "Number 2: " << b << endl;
			cout << endl;
			cout << "Processing..." << endl;
			cout << endl;
			float sum = a + b;
			float sub = a - b;
			float multiply = a * b;
			float divide = a / b;
			if (operation == "+")
			{
				cout << "OPERATION ADDITION..." << endl;
				cout << "Processing..." << endl;
				cout << endl;
				cout << "The addition of " << a << " and " << b << " is " << sum << endl;
				cout << endl;
			}
			else if (operation == "-")
			{
				cout << "OPERATION SUBRACTION..." << endl;
				cout << "Processing..." << endl;
				cout << endl;
				cout << "The subraction of " << a << " and " << b << " is " << sub << endl;
				cout << endl;
			}
			else if (operation == "*")
			{
				cout << "OPERATION MULTIPLICATION..." << endl;
				cout << "Processing..." << endl;
				cout << endl;
				cout << "The multiplication of " << a << " and " << b << " is " << multiply << endl;
				cout << endl;
			}
			else if (operation == "/")
			{
				cout << "OPERATION DIVISION..." << endl;
				cout << "Processing..." << endl;
				cout << endl;
				cout << "The division of " << a << " and " << b << " is " << divide << endl;
				cout << endl;
			}
			else if (operation == "sqrt")
			{
				cout << "OPERATION SQUARE ROOT..." << endl;
				cout << "Processing..." << endl;
				cout << endl;
				cout << "The square root of " << a << " is " << sqrt(a) << endl;
				cout << "The square root of " << b << " is " << sqrt(b) << endl;
				cout << endl;
			}
			else if (operation == "pow")
			{
				cout << "OPERATION POWER..." << endl;
				cout << "Processing..." << endl;
				cout << endl;
				int powa;
				cout << "Enter the power you want on " << a << ": ";
				cin >> powa;
				int powb;
				cout << "Enter the power you want on " << b << ": ";
				cin >> powb;
				cout << endl;
				cout << "PROCESSING..." << endl;
				cout << endl;
				cout << "The value of " << a << " to the power " << powa << " is: " << pow(a, powa) << endl;
				cout << "The value of " << b << " to the power " << powb << " is: " << pow(b, powb) << endl;
				cout << endl;
			}
			else if (operation == "max")
			{
				cout << "OPERATION FINDING MAXIMUM..." << endl;
				cout << "Processing..." << endl;
				cout << endl;
				cout << "The maximum between the numbers " << a << " and " << b << " is: " << max(a, b) << endl;;
				cout << endl;
			}
			else if (operation == "min")
			{

				cout << "OPERATION FINDING MINIMUM..." << endl;
				cout << "Processing..." << endl;
				cout << endl;
				cout << "The minimum between the numbers " << a << " and " << b << " is: " << min(a, b) << endl;
				cout << endl;
			}
			else
			{
				cout << "INVAILID OPERATION..." << endl;
			}
		}
	}
	cout << "Thanks for using this program, " << name << endl;
	return 0;

}
