#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H
#include <iostream>
using namespace std;

//Stack template 
template<class T>
class DynamicStack
{
private:
	//structure for the stack nodes
	struct StackNode
	{
		T value;            //Value in the node
		StackNode* next;    //Pointer to the next node

	};
	StackNode* top;      //pointer to the stack top 
public:
	//constructor 
	DynamicStack()
	{
		top = nullptr;
	}

	//Destructor 
	~DynamicStack();

	//Stack operations 
	void push(T);
	void pop(T&);
	bool isEmpty();

};
//*************************************************************************
//Destructor 
//*************************************************************************

template <class T>
DynamicStack<T>::~DynamicStack()
{
	StackNode* nodePtr, * nextNode;

	//position nodePtr at the top of the stack
	nodePtr = top;

	//Traverse the list deleting each node
	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;

	}

}
//************************************************************************
//member function push pushes the argument onto 
//the stack 
//************************************************************************

template <class T>
void DynamicStack<T>::push(T item)
{
	StackNode* newNode = nullptr;      //Pointer to a new node

	//allocate a new node and store num there
	newNode = new StackNode;
	newNode->value = item;

	//If there are no nodes in the list
	//make newNode the first node
	if (isEmpty())
	{
		top = newNode;
		newNode->next = nullptr;
	}
	else    //otherwise, insert newNode before top 
	{
		newNode->next = top;
		top = newNode;
	}
}
//************************************************************************
//member function pop pops the value at the top 
//of the stack off, and copies it into the variable
//passed as an argument
//************************************************************************

template<class T>
void DynamicStack<T>::pop(T& item)
{
	StackNode* temp = nullptr;    //Temporary pointer

	//First make sure the stack isnt empty 
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
	}
	else //pop value off top of stack 
	{
		item = top->value;
		temp = top->next;
		delete top;
		top = temp;

	}
}
//***********************************************************************
//member function isEmpty returns true if the stack 
//is empty, or false otherwise
//************************************************************************

template <class T>
bool DynamicStack<T>::isEmpty()
{
	bool status;

	if (!top)
		status = true;
	else
		status = false;
	return status;
}
#endif
