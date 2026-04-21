#define CRT_SECURE_NO_WARNINGS
#include<iostream>

#include"Student.h"
#include"Array.h"
#include"House.h"
#include"Point.h"
#include"Fraction.h"
#include"String.h"


void printArray(Array a)
{
	a.print();
}

void printStudent(Student s)
{
	s.show();
}

void fff(String s)
{

}


using namespace std;

int main()
{

	// 21.04.2026

	//Point p(3, 4);
	//p(1, 2);
	//p.print();

	Array a(10);
	a.set(100, 200);
	a.print();
	a.setValue(1, 999);
	a[1] = 999;
	cout << a[3] << endl;
	a.print();
	//a["one"] = 555;

	String s1;
	String s2("mama");
	String s3("papa");

	s3 = "papa";

	cin >> s3;
	cout << s3 << endl;

	String s4 = s2 + s3;

	s2 += s3;

	if (s2 == s3)
	{

	}
	

	// 14.04.2026

	//Fraction f;
	//Fraction f1(3);
	//Fraction f2(1,2);
	//Fraction f3(-1,1,-3);




	// . -> * :: ?:


	// - , ++ , -- ,

	// = - + * / % -= += *= /= %= 

	// !
	// > < >= <= == !=

	// () [] 

	//int a = 5;
	//a = +a;
	//++a;
	//a++;


	//Point p1(2, 3);
	//Point p2(4, 6);
	////Point p3 = p1.add(p2);
	////Point p3 = p1 + p2; // p1.operator+(p2) // operator+(p1, p2)
	//p1.print();
	//p2.print();
	////p3.print();

	////Point p4 = -p1;
	////(p1++).print();
	////++p1;
	////p1.print();

	////p1 += p2;
	////p1.print();

	////p1 = p2 + 5;

	//p1 = 5 + p2;
	//p1.print();

	//if (p1 > p2)
	//{

	//}

	//float f = p1;


	//Student st("Vasya", 15, 51);
	//st.show();

	// 09.04.2026
	//House house(10);

	//Apartment ap(1);
	//ap.addResident(Human("Serg", true));
	//ap.addResident(Human("Anna", false));
	//ap.print();


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
	// 
	// 
	// 
	//d = a = c;



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


