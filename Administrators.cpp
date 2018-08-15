/*
 * Administrators.cpp
 *
 *  Created on: Jul 14, 2015
 *      Author: MyFiles
 */
#include <iostream>
#include "administrators.h"
#include "employees.h"
using namespace std;

Administrators::Administrators () : Employees ()
{
	numberOfEmployees = 0;
}
Administrators::Administrators (int empID, string empName, string empPosition, int empSeniority, int empNumberOfEmployees) :Employees (empID, empName, empPosition, empSeniority)
{
	numberOfEmployees = empNumberOfEmployees;
}
Administrators::Administrators (const Administrators & anotherAdministrators) : Employees (anotherAdministrators)
{
	numberOfEmployees = anotherAdministrators.numberOfEmployees;
}
Administrators::~Administrators()
{

}
void Administrators::setNumberOfEmployees (int empNumberOfEmployees)
{
	numberOfEmployees = empNumberOfEmployees;
}
int Administrators::getNumberOfEmployees () const
{
	return numberOfEmployees;
}
void Administrators::print() const
{
	Employees::print();
	cout << "Number of employees managed: " << getNumberOfEmployees () << endl;
}



