/*
 * Researchers.cpp
 *
 *  Created on: Jul 9, 2015
 *      Author: MyFiles
 */
#include <iostream>
#include "researchers.h"
#include "employees.h"
using namespace std;


Researchers::Researchers() : Employees()
{
	title = "";
	areaOfExpertise = "";
}
Researchers::Researchers (int empID, string empName, string empPosition, int empSeniority, string empTitle, string empAreaOfExpertise ) : Employees(empID, empName, empPosition, empSeniority)
{
	title = empTitle;
	areaOfExpertise = empAreaOfExpertise;
}
Researchers::Researchers(const Researchers & anotherResearchers) : Employees(anotherResearchers)
{
	title = anotherResearchers.title;
	areaOfExpertise = anotherResearchers.areaOfExpertise;
}
Researchers::~Researchers()
{

}
void Researchers::setTitle (string empTitle)
{
	title = empTitle;
}
void Researchers::setAreaOfExpertise (string empAreaOfExpertise)
{
	areaOfExpertise = empAreaOfExpertise;
}
string Researchers::getTitle () const
{
	return title;
}
string Researchers::getAreaOfExpertise () const
{
	return areaOfExpertise;
}

void Researchers::print () const
{
	Employees::print();
	cout << "Title: " << getTitle() << endl;
	cout << "Area of expertise: "<< getAreaOfExpertise() << endl;
}



