#include<iostream>

#include"Student.h"


using namespace std;

int main()
{
	Student student("Vasya", 15);
	Student student1;
	student.show();
	student1.init("Vasya", 15);

	student.setName("Petya");

	student.show();
	int a = student.getAge();
	cout << student.getName() << endl;
}