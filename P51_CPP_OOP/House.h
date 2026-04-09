#pragma once
#include<iostream>
#include<iomanip>

using namespace std;


class Human
{
	char* name;
	bool owner;

public:
	Human();
	Human(const char* name, bool owner = false);
	~Human();
	Human(const Human& obj);
	Human& operator=(const Human& obj);

	void print();

	void setOwner(bool owner);
};

Human::Human(): name(nullptr), owner(false)
{}

Human::Human(const char* name, bool owner)
{
	this->owner = owner;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

Human::~Human()
{
	delete[] name;
}

Human::Human(const Human& obj)
{
	this->owner = obj.owner;
	this->name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
}

Human& Human::operator=(const Human& obj)
{
	if (this == &obj)
		return *this;

	if (name)
		delete[] name;

	this->owner = obj.owner;
	this->name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);

	return *this;
}

void Human::print()
{
	cout << setw(20) << left << name << " " << ((owner) ? "Owner" : "Not owner") << endl;
}

void Human::setOwner(bool owner)
{
	
}




class Apartment
{
	int number;
	Human* residents;
	size_t residentCount;

public:
	Apartment(int number);
	~Apartment();

	void addResident();
	void addResident(Human resident);

	void print();

};

Apartment::Apartment(int number) : number(number), residents(nullptr), residentCount(0)
{

}

Apartment::~Apartment()
{
	delete[] residents;
}

void Apartment::addResident()
{
	char buffer[20];
	bool owner;
	cout << "Add resident : " << endl;
	cout << "Name        : ";
	cin.getline(buffer, 20);
	cout << "Owner (1/0) : ";
	cin >> owner;
	cin.ignore();
	Human resident(buffer, owner);
	addResident(resident);
}

void Apartment::addResident(Human resident)
{
	Human* temp = new Human[residentCount + 1];
	for (size_t i = 0; i < residentCount; i++)
	{
		temp[i] = residents[i];
	}
	temp[residentCount] = resident;
	residentCount++;
	delete[] residents;
	residents = temp;
}

void Apartment::print()
{
	cout << "Number #" << number << endl;
	for (size_t i = 0; i < residentCount; i++)
	{
		cout << "  " << i + 1 << ". ";
		residents[i].print();
	}
	cout << endl;
}


class House
{
	char* address;

	Apartment* apartments;

	size_t countApartment;

};