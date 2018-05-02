#include "Student.h"

student::student(string name, string surname)
{
	this->name = name;
	this->surname = surname;
	std_count++;
}

istream & operator >> (istream & is, student & s)
{
	is >> s.name >> s.surname;
	return is;
}

ostream & operator<<(ostream & os, student s)
{
	os << s.name << "\t" << s.surname << endl;
	return os;
}

