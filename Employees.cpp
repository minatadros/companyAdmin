/*
 * Employees.cpp
 *
 *  Created on: Jul 9, 2015
 *      Author: MyFiles
 */
#include <iostream>
#include "employees.h"
using namespace std;



	Employees::Employees ()
	{
		name = "";
		position = "";
		id = 0;
		seniority = 0;
	}
	Employees::Employees (int empID, string empName, string empPosition, int empSeniority )
	{
		name = empName;
		position = empPosition;
		id = empID;
		seniority = empSeniority;
	}
	Employees::Employees (const Employees & anotherEmployees)
	{
		name = anotherEmployees.name;
		position = anotherEmployees.position;
		id = anotherEmployees.id;
		seniority = anotherEmployees.seniority;
	}
	Employees::~Employees ()
	{

	}
	void Employees::setName (string empName)
	{
		name = empName;
	}
	void Employees::setPosition (string empPosition)
	{
		position = empPosition;
	}
	void Employees::setID (int empID)
	{

	}
	void Employees::setSeniority(int empSeniority)
	{
		seniority = empSeniority;
	}
	string Employees::getName () const
	{
		return name;
	}
	string Employees::getPosition () const
	{
		return position;
	}
	int Employees::getID () const
	{
		return id;
	}
	int Employees::getSeniority() const
	{
		return seniority;
	}
	void Employees::print () const
	{
		cout << "Employee's details" <<endl;
		cout << "ID: " << getID() <<endl;
		cout << "Name:" << getName() <<endl;
		cout << "Position: " << getPosition() <<endl;
		cout << "Seniority: " << getSeniority() << endl;

	}


