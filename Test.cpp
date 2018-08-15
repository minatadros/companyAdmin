/*
 * Test.cpp
 *
 *  Created on: Jul 9, 2015
 *      Author: MyFiles
 */
#include <iostream>
#include <string>
#include "employees.h"
#include "researchers.h"
#include "administrators.h"
#include "company.h"
using namespace std;

int main()
{

	Employees e1 (1234, "Mina", "job", 7);
	e1.print();

	Researchers r1 (7447, "Randy", "Researcher", 2 , "researcher", "antibiotics");
	r1.print();

	Administrators a1 (9999, "keith", "Team leader", 6, 15);
	a1.print();

	Company c1 ("Concordia", "Montreal, Qc");

	c1.addEmployees (e1);
	c1.addEmployees (r1);
	c1.addEmployees (a1);
// print company information
	c1.print();
	c1.listOfEmployees ();
 // remove employee add reprint
	c1.removeEmployees(9999);
	c1.listOfEmployees ();
	return 0;
}











