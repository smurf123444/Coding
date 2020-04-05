//Header file linkedQueue.h

#ifndef H_linkedQueue
#define H_linkedQueue
 
#include <iostream>
#include <cassert>
#include "queueADT.h"

using namespace std;

//Definition of the node
template <class Type>
struct nodeType
{
    Type info;
    nodeType<Type> *link;
};


template <class Type>
class linkedQueueType: public queueADT<Type>
{
public:
    const linkedQueueType<Type>& operator=
                    (linkedQueueType<Type>&); 
      //Overload the assignment operator.
    const bool&  operator==
        (const linkedQueueType<Type>&);

    bool isEmptyQueue() const;
      //Function to determine whether the queue is empty. 
      //Postcondition: Returns true if the queue is empty,
      //               otherwise returns false.

    bool isFullQueue() const;
      //Function to determine whether the queue is full. 
      //Postcondition: Returns true if the queue is full,
      //               otherwise returns false.


    void initializeQueue();
      //Function to initialize the queue to an empty state.
      //Postcondition: queueFront = NULL; queueRear = NULL

    Type front() const;
    Type countFunc() const;
      //Function to return the first element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: If the queue is empty, the program 
      //               terminates; otherwise, the first 
      //               element of the queue is returned. 
    Type* printQueue();

    Type back() const;
      //Function to return the last element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: If the queue is empty, the program 
      //               terminates; otherwise, the last 
      //               element of the queue is returned.

    void addQueue(const Type& queueElement);
      //Function to add queueElement to the queue.
      //Precondition: The queue exists and is not full.
      //Postcondition: The queue is changed and queueElement
      //               is added to the queue.
    int Delete(linkedQueueType<Type> obj, int val);
    void deleteQueue();
      //Function  to remove the first element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: The queue is changed and the first 
      //               element is removed from the queue.

    linkedQueueType(); 
      //Default constructor

    linkedQueueType(const linkedQueueType<Type>& otherQueue); 
      //Copy constructor

    ~linkedQueueType(); 
      //Destructor
    int arr[10];
private:
    nodeType<Type> *queueFront; //pointer to the front of 
                                //the queue
    nodeType<Type> *queueRear;  //pointer to the rear of 
                                   //the queue
    nodeType<Type>* temp;
     int count;
  
};

    //Default constructor
template<class Type>
linkedQueueType<Type>::linkedQueueType() 
{
    queueFront = NULL; //set front to null
    queueRear = NULL;  //set rear to null
    count = 0;
} //end default constructor

template<class Type>
bool linkedQueueType<Type>::isEmptyQueue() const
{
    return(queueFront == NULL);
} //end 

template<class Type>
bool linkedQueueType<Type>::isFullQueue() const
{
    return false;
} //end isFullQueue

template <class Type>
void linkedQueueType<Type>::initializeQueue()
{
    nodeType<Type> *temp;

    while (queueFront!= NULL)  //while there are elements left
                               //in the queue
    {
        temp = queueFront;  //set temp to point to the 
                            //current node
        queueFront = queueFront->link;  //advance first to  
                                        //the next node
        delete temp;    //deallocate memory occupied by temp
    }

    queueRear = NULL;  //set rear to NULL
} //end initializeQueue


template <class Type>
void linkedQueueType<Type>::addQueue(const Type& newElement)
{
    nodeType<Type> *newNode;

    newNode = new nodeType<Type>;   //create the node

    newNode->info = newElement; //store the info
    newNode->link = NULL;  //initialize the link field to NULL

    if (queueFront == NULL) //if initially the queue is empty
    {
        count = 1;
        queueFront = newNode;
        queueRear = newNode;
    }
    else        //add newNode at the end
    {
        count = count + 1;
        queueRear->link = newNode;
        queueRear = queueRear->link;
    }
}//end addQueue

template <class Type>
Type linkedQueueType<Type>::front() const
{
    assert(queueFront != NULL);
    return queueFront->info; 
} //end front

template <class Type>
Type linkedQueueType<Type>::countFunc() const
{
    return count;
} //end front

template <class Type>
Type* linkedQueueType<Type>::printQueue()
{
    int i = 0;
    int r = 0;
    Type input = 0;
        temp = queueFront;
        if ((queueFront == NULL) && (queueRear == NULL)) {
            cout << "Queue is empty" << endl;
            return arr;
        }
        cout << "Queue elements are: ";
        while (temp != NULL) {
            cout << temp->info << " ";
            r = temp->info;
            arr[i] = r;
            temp = temp->link;
            i++;
         
        }
        cout << endl;
        return (arr);
} //end front 

template <class Type>
Type linkedQueueType<Type>::back() const
{
    assert(queueRear!= NULL);
    return queueRear->info;
} //end back

template <class Type>
void linkedQueueType<Type>::deleteQueue()
{
    nodeType<Type> *temp;
   
    if (!isEmptyQueue())
    {
        temp = queueFront;  //make temp point to the 
                            //first node
        queueFront = queueFront->link; //advance queueFront 

        delete temp;    //delete the first node
        count = 0;
        if (queueFront == NULL) //if after deletion the 
                                //queue is empty
            queueRear = NULL;   //set queueRear to NULL
    }
    else
        cout << "Cannot remove from an empty queue" << endl;
}//end deleteQueue
template <class Type>
int linkedQueueType<Type>::Delete(linkedQueueType<Type> obj, int val)
{
    
    int i = 0;
    int retval = -1;

    nodeType<Type>* current = queueFront;
    nodeType<Type>* temp_node = NULL;

    while (current->link->link != NULL)
    {
        if (current->link->info != val)
        {
            current = current->link;
        }
        else
        {
            temp_node = current->link;
            retval = temp_node->info;
            current->link = temp_node->link;
            free(temp_node);
        }

    }
    return retval;
}
    //Destructor
template <class Type>
linkedQueueType<Type>::~linkedQueueType() 
{
    //Write the definition of the destructor
} //end destructor

template <class Type>
const linkedQueueType<Type>& linkedQueueType<Type>::operator= (linkedQueueType<Type>& otherQueue)
{
    /*if (count >= 0) {
      otherQueue.queueFront = queueFront;
        otherQueue.queueRear = queueRear;
    }*/
    std::swap(otherQueue.front(), front);
    std::swap(otherQueue.back(), back);
    return *this;
    //Write the definition of to overload the assignment operator} //end assignment operator
    //return(otherQueue);
}
template <class Type>
const bool& linkedQueueType<Type>::operator== (const linkedQueueType<Type>& otherQueue)
{
    if (count == otherQueue.count)
    {
        cout << "It has the same amount of items" << endl;
    }
    else {
        return (0);
    }
    //Write the definition of to overload the assignment operator

} //end assignment operator
	//copy constructor
template <class Type>
linkedQueueType<Type>::linkedQueueType
                 (const linkedQueueType<Type>& otherQueue) 
{
    //Write the definition of the copy constructor


}//end copy constructor

#endif
