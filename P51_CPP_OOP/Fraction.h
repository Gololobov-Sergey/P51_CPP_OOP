#pragma once
class Fraction
{
	int integer;
	int numerator;
	int denominator;

public:
	Fraction() : Fraction(0) 
	{ 
	
	}

	Fraction(int integer) : Fraction(0, 1)
	{
		this->integer = integer;
	}

	Fraction(int numerator, int denomunator) : Fraction(0, numerator, denomunator) 
	{

	}

	Fraction(int integer, int numerator, int denomunator)
	{
		this->integer = integer;
		this->numerator = numerator;
		this->denominator = denomunator;
	}
};

