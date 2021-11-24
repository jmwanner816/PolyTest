#include "employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string theName, float thePayRate)
{
	name = theName;
	payRate = thePayRate;
	//print(name, payRate);
}

Employee::~Employee() {}

string Employee::getName() const
{
	return name;
}

float Employee::getPayRate() const
{
	return payRate;
}

float Employee::pay(float hoursWorked) const
{
	return hoursWorked * payRate;
}

void Employee::printPay(float hoursWorked) const
{
	cout << "Pay: " << pay(hoursWorked) << endl;
}
void Employee::print(double hours)
{
	cout << " " << hours << endl;
	
}