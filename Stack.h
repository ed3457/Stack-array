#pragma once
#include <iostream>
using namespace std;

template <class Type>
class Stack
{
private:
	int topIndex;
	int count;
	int maxSize;
	Type* elements;

public:
	Stack();
	bool Push(Type element);
	Type Pop();
	Type Top();
	bool isEmpty();
	bool isFull();
	void reset();
	~Stack();

};
