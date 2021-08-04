#include <stdio.h>
#include <stdlib.h>

typedef struct tNode
{
    int value;
    struct tNode *ptrNextNode;
} Node;

typedef struct 
{
    Node *frontal;
    Node *final;
    int size;
} Queue;

Queue *create();

void enqueue(Queue *myQueue, int value);

int dequeue(Queue *myQueue);