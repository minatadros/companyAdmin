/*
 * Employees.h
 *
 *  Created on: Jul 9, 2015
 *      Author: MyFiles
 */
#ifndef EMPLOYEES_H_
#define EMPLOYEES_H_
#include <string>
using namespace std;
class Employees
{
public:
	Employees ();
	Employees (int, string, string, int );
	Employees (const Employees &);
	virtual ~Employees ();
	void setName (string);
	void setPosition (string);
	void setID (int);
	void setSeniority(int);
	string getName () const;
	string getPosition () const;
	int getID () const;
	int getSeniority() const;
	virtual void print () const;




private:
	string name, position;
	int id, seniority;
};
#endif /* EMPLOYEES_H_ */
