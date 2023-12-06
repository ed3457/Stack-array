#include "Stack.h"

template<class Type>
 Stack<Type>::Stack()
{
	 maxSize = 200;
	 elements = new Type[maxSize];
	 reset();
}

template<class Type>
 bool Stack<Type>::Push(Type element)
{
	 if (!isFull())
	 {
		 topIndex += 1;
		 elements[topIndex] = element;
		 return true;
	 }
	 else

		 return false;
}

template<class Type>
 Type Stack<Type>::Pop()
{
	 if (!empty())
	 {
		 return elements[topIndex--];
		
	 }
	 else
		 return NULL;
}

template<class Type>
Type Stack<Type>::Top()
{
	if (!empty())
		return elements[topIndex];
	else
		return NULL;
}

template<class Type>
 bool Stack<Type>::isEmpty()
{
	return count==0;
}

template<class Type>
 bool Stack<Type>::isFull()
{
	return count==maxSize;
}

template<class Type>
 void Stack<Type>::reset()
{
	 topIndex = -1;
	 count = 0;
}

 template<class Type>
 Stack<Type>::~Stack()
 {
	 delete[] elements;
 }
