/*
 * Researchers.h
 *
 *  Created on: Jul 9, 2015
 *      Author: MyFiles
 */
#ifndef RESEARCHERS_H_
#define RESEARCHERS_H_
#include "employees.h"
#include <string>
using namespace std;
class Researchers : public Employees
{
public:

	Researchers ();
	Researchers (int, string, string, int, string, string);
	Researchers (const Researchers &);
	virtual ~Researchers ();
	void setTitle (string);
	void setAreaOfExpertise (string);
	string getTitle () const;
	string getAreaOfExpertise () const;
	virtual void print () const;

private:
	string title, areaOfExpertise;
};
#endif /* RESEARCHERS_H_ */
