#include "manager.h"

Manager::Manager(string theName,
	float thePayRate,
	bool isSalaried)
	: Employee(theName, thePayRate)
{
	salaried = isSalaried;
}

bool Manager::getSalaried() const
{
	return salaried;
}

float Manager::pay(float hoursWorked) const
{
	if (salaried)
		return payRate;
	/* else */
	return Employee::pay(hoursWorked);
}