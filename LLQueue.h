#ifndef LLQueue_H
#define LLQueue_H

// LLQueue struct to hold data
typedef struct LLQueue
{
    double data;
}LLQueue;

//LLQueue *LLQ = (LLQueue*)malloc(sizeof(LLQueue)); 
    //LLQ->front = NULL;
    //LLQ->rear = NULL; 

// Function to create Linked List Queue
LLQueue *LLQ_create();

// Function to insert data in LLQ
int LLQ_insert(LLQueue *LLQ, double data) ;

// Function to delete oldest element from LLQ
double LLQ_delete(LLQueue *LLQ);

// Function to display all elements of LLQ
void LLQ_print(LLQueue *LLQ);

// Function to count number of elements in LLQ
unsigned int LLQ_count(LLQueue *LLQ);

//Function to search an element in LLQ
double *LLQ_Search(LLQueue *LLQ, double data);

//Function to delete all the data in LLQ
void LLQ_free(LLQueue *LLQ);

//Function to find maximum element in LLQ
double LLQ_maximum(LLQueue *LLQ);

//Function to find minimum element in LLQ
double LLQ_minimum(LLQueue *LLQ);


#endif
