#pragma once
#include <iostream>
#include<cassert>

//#include"Student.h"

using namespace std;

template<class T>
class Array
{
	T* arr;
	size_t size;

public:
	explicit Array(size_t size);

	~Array();

	Array(const Array& obj);

	void set(int minValue, int maxValue) const;

	void set() const;

	void print() const;

	void push(const T& value);

	void insert(size_t index, const T& value);

	void pop();

	void remove(size_t index);

	T getMaxValue() const;
	
	T getMixValue() const;
	
	auto getAvg() const;

	void sort() const;

	void setValue(size_t index, const T& value) const;

	T& operator[](int index);
};


template<class T>
Array<T>::Array(size_t size)
{
	cout << "Constructor Array" << endl;
	this->size = size;
	arr = new T[size];
}

template<class T>
Array<T>::~Array()
{
	cout << "Destructor Array" << endl;
	delete[] arr;
}

template<class T>
Array<T>::Array(const Array& obj)
{
	cout << "Constructor Copy Array" << endl;
	size = obj.size;
	arr = new T[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = obj.arr[i];
	}
}

template<class T>
void Array<T>::set() const
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = T();
	}
}

template<>
void Array<int>::set(int minValue, int maxValue) const
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

template<class T>
void Array<T>::print() const
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


template<class T>
void Array<T>::push(const T& value)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = value;
	delete arr;
	size++;
	arr = temp;
}

template<class T>
void Array<T>::insert(size_t index, const T& value)
{

}

template<class T>
void Array<T>::pop()
{

}

template<class T>
void Array<T>::remove(size_t index)
{}

template<class T>
T Array<T>::getMaxValue() const
{
	return T();
}

template<class T>
T Array<T>::getMixValue() const
{
	return T();
}

template<class T>
auto Array<T>::getAvg()const
{
	return 0;
}

template<>
auto Array<int>::getAvg() const
{
	int s = 0;
	for (size_t i = 0; i < size; i++)
	{
		s += arr[i];
	}
	return (double)s / size;
}

template<class T>
void Array<T>::sort() const
{

}

template<class T>
void Array<T>::setValue(size_t index, const T& value) const
{
	arr[index] = value;
}

template<class T>
T& Array<T>::operator[](int index)
{
	assert(index >= 0 && index < size);
	return arr[index];
}
