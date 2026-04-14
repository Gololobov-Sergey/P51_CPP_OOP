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
	
	explicit Student(int g) : group(g), marks(0), name(nullptr)
	{
		cout << "Ctor" << endl;
		age = 0;
		setName("");
		count++;
	}

	Student(const char* name, int a, int g) : group{g}, marks(0), name(nullptr)
	{
		cout << "Ctor 2" << endl;
		setAge(a);
		setName(name);
		count++;
	}

	Student(const Student& obj): group(obj.group), marks(obj.marks), name(nullptr)
	{
		count++;
		setName(obj.name);
		age = obj.age;
	}

	~Student()
	{
		count--;
		delete name;
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

	void setName(const char* name)
	{
		if (this->name)
			delete this->name;
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}

	int getAge() const
	{
		return age;
	}

	const char* getName() const
	{
		return name;
	}

	void show() const
	{
		cout << "Name   : " << name << endl;
		cout << "Age    : " << age << endl;
		cout << "Group  : " << group << endl;
		cout << "Marks  : "; marks.print();
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