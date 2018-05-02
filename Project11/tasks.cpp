#include "Student.h"
#include "cstring"

int student::std_count;

void example()
{
	static int n; //можно присвоить ноль, можно и не присваиваить
	n += 10;
	cout << n << endl;
}

void main()
{
	short nz;
	cout << ": ";
	cin >> nz;
	switch (nz)
	{


	case 1:
	{
		student::init();

		student s;
		cout << student::getCount();
		cout << endl;


		student s1;
		cout << student::getCount();
		cout << endl;
	}break;

	case 2:
	{
		example();
		example();

	}break;

	case 3:
	{
		char str1[] = "this is example string";
		char str2[] = "example";
		cout << strstr(str1, str2) - str1 << endl;

	}break;
	}

	system("pause");
}