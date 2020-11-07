#include <stdio.h>
#include <stdlib.h>

#include "LLQueue.h"

//Lined List Node created and stores data and *next element; front and rear of LLQ created
        struct Node{
                double data;
                struct Node *next;
    }*front = NULL,*rear = NULL;
 
// Function to create Linked List Queue
LLQueue *LLQ_create(){

    ////Lined List Node created and stores data and *next element; front and rear of LLQ created
    struct Node { 
        double key; 
        struct Node* next; 
    }*front = NULL, *rear = NULL;

    //front to store front node, rear to store last node of LLQ   
    /** 
    struct LLQueue { 
        struct Node *front;
        struct Node *rear; 
    }; 
    **/

    //Declaring front value
    front = (struct Node*)malloc(sizeof(struct Node));

    //If front is NULL, LLQ cannot be stores
    if(front == NULL){
        printf("\nUnable to allocate due to lack of memory.\n");
        return NULL;
    }
  
    // Creates new LLQ node
    else{
    struct Node* newNode(double data) 
    { 
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); 
        temp->key = data; 
        temp->next = NULL; 
        return temp; 
    } 
  
    // Creates an empty queue

    printf("\nEmpty queue created successfully !\n");
    
    }   
} 

// Function to insert data in LLQ
int LLQ_insert(LLQueue *LLQ, double data) 
{ 
    
    //New Node for LLQ is created
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node)); 
    temp->data = data;
    temp->next = NULL;

    //Queue is empty, hence front and rear both are same 
    if(front == NULL){
        front = temp;
        rear = temp;
    }
    //Queue has elements, then new element stored after last element
    else{
        rear -> next = temp;
        rear = temp;
    }
    printf("\nInsertion successful !\n");
 
} 

// Function to delete oldest element from LLQ
double LLQ_delete(LLQueue *LLQ)
{
   //queue is empty 
   if(front == NULL)
      printf("\nError !! Queue is Empty!!!\n");
   //Queue has elements, oldest element is removed
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %0.3f\n", temp->data);
      free(temp);
   }
}

// Function to count number of elements in LLQ  
unsigned int LLQ_count(LLQueue* LLQ)
{
    int count = 0;
    struct Node *temp;
    temp = front;
    //while loop will run untill NULL is reached
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to display all elements of LLQ
void LLQ_print(LLQueue *LLQ)
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%0.3f--->",temp->data);
	 temp = temp -> next;
      }
      printf("%0.3f--->NULL\n",temp->data);
   }
}

//Function to search an element in LLQ
double *LLQ_Search(LLQueue *LLQ, double data)
{
    int count = 0;
    struct Node *temp;
    temp = front;
    double *index;
    if(front->data == data){
        //Element present at index 0 of queue
        index = &(front->data);        
        printf("\n%0.3f is found at the Beginning of the LLQueue, i.e. index position %d\n",data, count);
        return index;
    }   

    if(rear->data == data){
        //Element present at last index position of queue
        count = LLQ_count(LLQ);
        index = &(rear->data);
        printf("\n%0.3f is found at the end of the LLQueue, i.e. index position %d\n",data, (count-1));
        return index;
    }


    while(temp != NULL)
    {
        count++;
        if(temp->data == data){
            // Element present in middle part of Queue
            index = &(temp->data) ;
            printf("\n%0.3f is found in middle part of queue at index position %d\n",data, (count-1));
            return index ;
        }
        temp = temp->next ;

    }
    
    // Element not present in current Queue
    printf("\nError !! %0.3f is not present in current LLQueue\n", data);
    index = NULL ;
    return index;

}

//Function to delete all the data in LLQ
void LLQ_free(LLQueue *LLQ)
{
    struct Node *temp;

    if(front == NULL){
        printf("\n Error !! Queue is empty.\n");
        return;
    }
    //while loop will run untill every element is deleted
    while(front != NULL)
    {
        temp = front;
        front = front->next;

        free(temp);
    }
    printf("\nDeleted All elements of Linked List Queue, one after another, finally deleting the queue.\n");
}

//Function to find maximum element in LLQ
double LLQ_maximum(LLQueue *LLQ)
 {  
    struct Node *current = front;  
    double max;  
      
    if(front == NULL) {  
        printf("List is empty \n");  
    }  
    else {  
        //Assigning max to front of queue  
        max = front->data;  
          
        while(current != NULL){  
             //if current element's value is more than max, then current will be new max
             if(max < current->data) {  
                 max = current->data;  
             }  
             current = current->next;  
        }               
        printf("\nMaximum value of element in the LL queue is %0.3f\n", max);  
    }  return max;
}  

//Function to find minimum element in LLQ
double LLQ_minimum(LLQueue *LLQ) 
{  
    struct Node *current = front;  
    double min;  
      
    if(front == NULL) {  
        printf("\nList is empty\n");  
    }  
    else {  
        //Assigning min to front of queue  
        min = front->data;  
          
        while(current != NULL){  
            //if current element's value is less than min, then current will be new min
             if(min > current->data) {  
                 min = current->data;  
             }  
             current = current->next;  
        }          
        printf("\nMinimum value of element in the LL queue is %0.3f\n", min);  
    }  
}  
