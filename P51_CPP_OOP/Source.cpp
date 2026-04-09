#include<iostream>

#include"Student.h"
#include"Array.h"
#include"House.h"


void printArray(Array a)
{
	a.print();
}

void printStudent(Student s)
{
	s.show();
}


using namespace std;

int main()
{

	// 09.04.2026

	Apartment ap(1);
	ap.addResident();
	ap.addResident();
	ap.print();


	// 07.04.2026

	//Array a(5);
	//Array b(15);
	//a = a;


	//Array a(5);
	//a.set();
	//printArray(a);
	//a.print();

	//Array b(a);
	//Array c = a;
	//Array d(10);
	//d = a;



	//Student st("Vasya", 15, 51);
	//st.addMark(10);  
	//st.addMark(10);
	//st.addMark(10);
	//st.show(); // show(st);
	//printStudent(st);
	//st.show();

	//Student st("Vasya", 15, 51);
	//st.addMark(10);
	//st.addMark(12);
	//st.addMark(955);

	//{
	//	Array a(10);
	//	a.set(100, 200);
	//	a.print();
	//	a.push(99);
	//	a.print();
	//	a.sort();
	//}


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


