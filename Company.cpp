/*
 * Company.cpp
 *
 *  Created on: Jul 14, 2015
 *      Author: MyFiles
 */
#include <iostream>
#include "company.h"
using namespace std;

Company::Company ()
{
	name = "";
	address = "";
	numberOfCompanyEmployees = 0;
	employees = new Employees [20];
}
Company::Company (string compName, string compAddress)
{
	name = compName;
	address = compAddress;
	numberOfCompanyEmployees = 0;
	employees = new Employees [20];
}
Company::Company (const Company & anotherCompany)
{
	name = anotherCompany.getName();
	address = anotherCompany.getAddress();
	numberOfCompanyEmployees = anotherCompany.getNumberOfCompanyEmployees();
	employees = new Employees [20];
	for (int i = 0; i < numberOfCompanyEmployees; i++)
	{
		employees[i] = anotherCompany.employees[i];
	}
}
Company::~Company ()
{
delete [] employees;
}
void Company::setAddress (string compAddress)
{
	address = compAddress;
}
void Company::setName (string compName)
{
	name = compName;
}
//void Company::addEmployees (const Employees & a)
//{
	//if (numberOfCompanyEmployees < 20)
	//{
		//employees[numberOfCompanyEmployees] = a;
		//numberOfCompanyEmployees++;
	//}
	//	else {
	//		cout << "Employee " << a.getName() << "cannot be added - number of accounts exceeded" << endl;
//		}
//}
void Company::addEmployees (const Employees & a)
{
	if ( searchEmployees(a) == true)
	{
		cout << "Employee already exists !!!!" << endl;
	}else{

		employees[numberOfCompanyEmployees] = a;
		numberOfCompanyEmployees++;
	}
}
string Company::getName () const
{
	return name;
}
string Company::getAddress () const
{
	return address;
}
int Company::getNumberOfCompanyEmployees () const
{
	return numberOfCompanyEmployees;
}

void Company::removeEmployees (int empID)
{
	for (int i =0; i < numberOfCompanyEmployees; i++) {
		if (employees[i].getID() == empID){
			for (int j = i; j < numberOfCompanyEmployees-1; j++) {
				employees[j] = employees[j+1]; // shift the elements of array
			}
			numberOfCompanyEmployees--;
			return;
		}
	}

}

void Company::listOfEmployees () const
{
	for (int i=0; i < numberOfCompanyEmployees; i++)
	{
		cout << "Employee: " << employees[i].getName () << endl;
	}
}

bool Company::searchEmployees (const Employees & a) const
{
	for (int i=0; i< numberOfCompanyEmployees; i++)
	{
		if (employees[i].getID() == a.getID())
			return true;
		else
			return false;
	}
}
void Company::print() const
{
	cout << "Company's information: " << endl;
	cout << "Name: " << getName() << endl;
	cout << "Address: " << getAddress() << endl;
}


