#pragma once
#include <string>
#include <iostream>

using namespace std;
class student {
private:
	string name;
	string surname;

public:
	static int std_count;
	student() { std_count++; }
	student(string name, string surname);

	static void init() { std_count = 0; }
	static int getCount() { return std_count; }

	friend istream& operator >> (istream& is, student &s);
	friend ostream& operator << (ostream& os, student s);

	~student()
	{
		std_count--;
	}
};