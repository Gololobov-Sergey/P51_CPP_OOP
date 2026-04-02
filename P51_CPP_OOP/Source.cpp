#include<iostream>

#include"Student.h"
#include"Array.h"


using namespace std;

int main()
{

	Student st("Vasya", 15, 51);
	st.addMark(10);
	st.addMark(12);
	st.addMark(955);

	{
		Array a(10);
		a.set(100, 200);
		a.print();
		a.push(99);
		a.print();
		a.sort();
	}


	//int a = 10;
	//int b(10.5);
	//int c{ 10 };


	//cout << Student::getCount() << endl;

	//Student student("Vasya", 15, 51);

	//cout << student.getCount() << endl;

	//Student student1(52);

	//cout << student1.getCount() << endl;

	//student.show();
	//student1.init("Vasya", 15);

	//student.setName("Petya");

	//student.show();
	//int a = student.getAge();
	//cout << student.getName() << endl;

	//Student* st = new Student("Kolya", 14, 51);
	//st->show();
	//cout << Student::getCount() << endl;
}