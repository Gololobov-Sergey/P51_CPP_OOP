#pragma once
#include<iostream>

#include"Array.h"

using namespace std;


class Student
{

	int age;
	char* name;

	Array marks;

	static int count;

	const int group;

public:
	
	Student(int g) : group(g), marks(0)
	{
		cout << "Ctor" << endl;
		age = 0;
		setName("");
		count++;
	}

	Student(const char* n, int a, int g) : group{g}, marks(0)
	{
		cout << "Ctor 2" << endl;
		setAge(a);
		setName(n);
		count++;
	}

	static int getCount()
	{
		return count;
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
		cout << "Name   : " << name << endl;
		cout << "Age    : " << age << endl;
		cout << "Group  : " << group << endl;
	}

	void addMark(int mark)
	{
		if (mark < 1 || mark > 12)
		{
			return;
		}

		marks.push(mark);
	}
};


int Student::count = 0;