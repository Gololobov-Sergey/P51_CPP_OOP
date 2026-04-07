#include <iostream>
#include "Array.h"

using namespace std;

Array::Array(size_t size)
{
	cout << "Constructor Array" << endl;
	this->size = size;
	arr = new int[size];
}

Array::~Array()
{
	cout << "Destructor Array" << endl;
	delete[] arr;
}

Array::Array(const Array& obj)
{
	cout << "Constructor Copy Array" << endl;
	size = obj.size;
	arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = obj.arr[i];
	}
}

void Array::set(int minValue, int maxValue)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

void Array::print()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Array::push(int value)
{
	int* temp = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = value;
	delete arr;
	size++;
	arr = temp;
}

void Array::insert(size_t index, int value)
{}

void Array::pop()
{

}

void Array::remove(size_t index)
{}

int Array::getMaxValue()
{
	return 0;
}

int Array::getMixValue()
{
	return 0;
}

int Array::getAvg()
{
	return 0;
}

void Array::sort()
{}

void Array::setValue(size_t index, int value)
{
	arr[index] = value;
}
