/*
 * Administrators.h
 *
 *  Created on: Jul 14, 2015
 *      Author: MyFiles
 */

#ifndef ADMINISTRATORS_H_
#define ADMINISTRATORS_H_
#include "employees.h"
#include <string>
using namespace std;

class Administrators : public Employees
{
public:
	Administrators ();
	Administrators (int, string, string, int, int);
	Administrators (const Administrators &);
	virtual ~Administrators ();
	void setNumberOfEmployees (int);
	int getNumberOfEmployees () const;
	virtual void print() const;

private:

	int numberOfEmployees;
};




#endif /* ADMINISTRATORS_H_ */
