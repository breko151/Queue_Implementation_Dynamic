#include "Queue.h"

Queue *create()
{
    Queue *myQueue = (Queue *) malloc(sizeof(Queue *));
    myQueue->size = 0;
    myQueue->final = NULL;
    myQueue->frontal = NULL;
    return myQueue;
}

void enqueue(Queue *myQueue, int value)
{
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->value = value;
    newNode->ptrNextNode = NULL;
    if(myQueue->frontal == NULL)
        myQueue->frontal = newNode;
    else
        myQueue->final->ptrNextNode = newNode;
    myQueue->final = newNode;
    myQueue->size++;
}

int dequeue(Queue *myQueue)
{
    if(myQueue->size)
    {
        int returnValue;
        Node *aux = myQueue->frontal;
        returnValue = aux->value;
        myQueue->frontal = myQueue->frontal->ptrNextNode;
        free(aux);
        myQueue->size--;
        return returnValue;
    }
    return -1;
}