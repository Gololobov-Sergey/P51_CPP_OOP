#pragma once


class Human
{
	char* name;
	bool owner;
};


class Apartment
{
	int number;
	Human* residents;
	size_t residentCount;

public:
	Apartment();
	~Apartment();

private:

};

Apartment::Apartment()
{}

Apartment::~Apartment()
{}


class House
{
	char* address;

	Apartment* apartments;
	size_t countApartment;

};