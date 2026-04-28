#pragma once


enum class TYPE
{
	INT, DOUBLE, STRING
};

class var
{
	TYPE type;

	void* value;

public:
	var(int i)
	{
		value = new int;
		*((int*)value) = i;
		type = TYPE::INT;
	}

	var(double d)
	{
		value = new double;
		*((double*)value) = d;
		type = TYPE::DOUBLE;
	}

	var(const char* st)
	{

	}

	TYPE getType()
	{
		return type;
	}

	void print()
	{
		if (type == TYPE::DOUBLE)
			cout << *((int*)value) << endl;

	}
};

