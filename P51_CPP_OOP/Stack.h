#pragma once

#include"Node.h"


template<class T, size_t maxSize>
class Stack
{
	Node<T>* first;
	size_t   length;

public:
	Stack();
	~Stack();
	Stack(const Stack& obj);
	Stack& operator=(const Stack& obj);

	void   push(const T& value);
	void   pop();
	T&     peek();
	bool   isEmpty();
	size_t size();
	void   print();
	void   clear();
};

template<class T, size_t maxSize>
Stack<T, maxSize>::Stack(): first(nullptr), length(0) { }

template<class T, size_t maxSize>
inline Stack<T, maxSize>::~Stack()
{
	clear();
}

template<class T, size_t maxSize>
Stack<T, maxSize>::Stack(const Stack& obj)
{
	for (size_t i = 0; i < obj.length; i++)
	{
		this->push(T());
	}
	Node<T>* temp1 = obj.first;
	Node<T>* temp2 = this->first;
	for (size_t i = 0; i < length; i++)
	{
		temp2->value = temp1->value;
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
}

template<class T, size_t maxSize>
Stack<T, maxSize>& Stack<T, maxSize>::operator=(const Stack & obj)
{
	return Stack<T, maxSize>();
}

template<class T, size_t maxSize>
void Stack<T, maxSize>::push(const T& value)
{
	if (length < maxSize)
	{
		if (length == 0)
		{
			first = new Node<T>(value);
		}
		else
		{
			Node<T>* newNode = new Node<T>(value);
			newNode->next = first;
			first = newNode;
		}
		length++;
	}
}

template<class T, size_t maxSize>
void Stack<T, maxSize>::pop()
{
	if (length > 0)
	{
		Node<T>* temp = first;
		first = first->next;
		delete temp;
		length--;
	}
}

template<class T, size_t maxSize>
T& Stack<T, maxSize>::peek()
{
	return first->value;
}

template<class T, size_t maxSize>
bool Stack<T, maxSize>::isEmpty()
{
	return length == 0;
}

template<class T, size_t maxSize>
size_t Stack<T, maxSize>::size()
{
	return length;
}

template<class T, size_t maxSize>
void Stack<T, maxSize>::print()
{
	Node<T>* temp = first;
	while (temp)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
}

template<class T, size_t maxSize>
void Stack<T, maxSize>::clear()
{
	Node<T>* temp = first;
	while (first)
	{
		first = first->next;
		delete temp;
		temp = first;
	}
	length = 0;
}


