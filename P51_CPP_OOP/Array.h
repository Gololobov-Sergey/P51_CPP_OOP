#pragma once

class Array
{
	int* arr;
	size_t size;

public:
	explicit Array(size_t size);

	~Array();

	Array(const Array& obj);

	void set(int minValue = 0, int maxValue = 9);

	void print();

	void push(int value);

	void insert(size_t index, int value);

	void pop();

	void remove(size_t index);

	int getMaxValue();
	
	int getMixValue();
	
	int getAvg();

	void sort();

	void setValue(size_t index, int value);
};

