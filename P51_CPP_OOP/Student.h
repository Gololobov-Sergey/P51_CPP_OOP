#pragma once
#include<iostream>

using namespace std;


class Student
{

	int age;
	char* name;

	int* marks;
	int size;

public:

	Student()
	{
		cout << "Ctor" << endl;
		age = 0;
		setName("");
	}

	Student(const char* n, int a)
	{
		cout << "Ctor 2" << endl;
		setAge(a);
		setName(n);
	}


	void init(const char* n, int a)
	{
		setAge(a);
		setName(n);
	}

	void setAge(int a)
	{
		if (a > 100)
			return;
		age = a;
	}

	void setName(const char* n)
	{
		if (name)
			delete name;
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}

	int getAge()
	{
		return age;
	}

	const char* getName()
	{
		return name;
	}

	void show()
	{
		cout << "Name : " << name << endl;
		cout << "Age  : " << age << endl;
	}
};
