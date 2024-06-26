#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;

//stack template
template <class T>
class Queue
{
private:
	T* queueArray;             //points to the queue array 
	int queueSize;             //The queue size 
	int front;                 //subscript of the queue front 
	int rear;                  //subscript of the queue rear
	int numItems;              //Number of items in the queue
public:
	//constructor 
	Queue(int);

	//copy constructor 
	Queue(const Queue&);

	//destructor 
	~Queue();

	//Queue operations 
	void enqueue(T);
	void dequeue(T&);
	bool isEmpty() const;
	bool isFull() const;
	void clear();

};
//************************************************************************
//This constructor creates an empty queue of a specified size 
//************************************************************************
template <class T>
Queue<T>::Queue(int s)
{
	queueArray = new T[s];
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;
}

//************************************************************************
//copy constructor 
//************************************************************************
template<class T>
Queue<T>::Queue(const Queue& obj)
{
	 //allocate the queue array 
	queueArray = new T[obj.queueSize];

	//copy the other objects attributes
	queueSize = obj.queueSize;
	front = obj.front;
	rear = obj.rear;
	numItems = obj.numItems;

	//copy the other object's queue array.
	for (int count = 0; count < obj.queueSize; count++)
		queueArray[count] = obj.queueArray[count];
}

//************************************************************************
//destructor 
//************************************************************************
template <class T>
Queue<T> :: ~Queue()
{
	delete[] queueArray;
}

//************************************************************************
//function enqueue inserts avalue at the rear of the queue
//************************************************************************
template <class T>
void Queue<T>::enqueue(T item)
{
	if (isFull())
		cout << "The queue is full. \n";
	else
	{
		//calculate the new rear position 
		rear = (rear + 1) % queueSize;
		//Insert new item
		queueArray[rear] = item;
		//update item count 
		numItems++;
	}
}
//*************************************************************************
//Function dequeue removes the value at the front of the queue
//and copies t into num
//***************************************************************************
template <class T>
void Queue<T>::dequeue(T& item)
{
	if (isEmpty())
		cout << "The queue is empty.\n";
	else
	{
		//move front 
		front = (front + 1) % queueSize;
		//Retrieve the front item 
		item = queueArray[front];
		//update item count 
		numItems--;
	}
}
//***********************************************************************
//isEmpty returns true if the queue is empty, otherwise false
//***********************************************************************
template<class T>
bool Queue<T> ::isEmpty() const
{
	bool status;

	if (numItems)
		status = false;
	else
		status = true;
	return status;

}
//************************************************************************
//isFull returns true if the queue is full, otherwise false
//************************************************************************
template<class T>
bool Queue<T>::isFull() const
{
	bool status;

	if (numItems < queueSize)
		status = false;
	else
		status = true;
	return status;
}
//*************************************************************************
//clear sets the front and rear indices, and sets numItems to 0
//*************************************************************************
template <class T>
void Queue<T>::clear()
{
	front queueSize - 1;
	rear = queueSize - 1;
	numItems = 0;
}
#endif
