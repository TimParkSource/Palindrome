#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H
#include "QueueInterface.h"

const int MAX2 = 30;
class ArrayQueue : public QueueInterface
{
private:
	/**
	*Array that holds queue elements has a fixed size of MAX.
	*/
   ItemType  queue [MAX2]; 
   /**
   *Number of items in the queue 
      */
   int numItems;   
   /**
   *index of front of queue.
   */
   int front; 
   /**
   *index of rear of queue.
   */
   int rear;             
public:
  /**
  * Default constructor sets the numItems = 0, front = 0,
  *rear = -1.
  */
   ArrayQueue();
   void enqueue(ItemType item);
   ItemType dequeue( );
   bool isEmpty() const;
   bool isFull() const;
  /**
  *Default destructor has no code in  it.
  */
	~ArrayQueue();
};
#endif
