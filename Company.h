/*
 * Company.h
 *
 *  Created on: Jul 14, 2015
 *      Author: MyFiles
 */

#ifndef COMPANY_H_
#define COMPANY_H_
#include "employees.h"
#include <string>
using namespace std;

class Company
{
	public:
	Company ();
	Company (string, string);
	Company (const Company &);
	virtual ~Company ();
	void setAddress (string);
	void setName (string);
	void addEmployees (const Employees &);
	string getName () const;
	string getAddress () const;
	int getNumberOfCompanyEmployees () const;
	void removeEmployees (int);
	void listOfEmployees ()const;
	bool searchEmployees (const Employees &) const;
	void print() const;

	private:
	string name, address;
	Employees * employees;
	int numberOfCompanyEmployees;
};




#endif /* COMPANY_H_ */
