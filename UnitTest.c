#include <stdio.h>
#include <stdlib.h>

#include "LLQueue.h"

int main()
{
    int choice, t, b;
    double item, value, m, a;
    //Test Case 1: Creating the LLQueue
    printf("\nCase 1: We will create an Linked List Queue named LLQ using create function and confirm that empty queue is created using LLQ_print function.\n");
    LLQueue* LLQ = LLQ_create();
    LLQ_print(LLQ);

    //Test Case 2: Inserting an item 2 in our empty queue LLQ
    a = 1; //Element to be added is a
    printf("\nCase 2: We will add an element %0.3f to our empty queue LLQ. To check, we will print the element(s) in queue and check the count of element(s) in queue.\n",a);
    LLQ_insert(LLQ, a);
    LLQ_print(LLQ);
    t = LLQ_count(LLQ); 
    printf("\nTotal number of element(s) in queue is/are %d.\n", t);
    
   // Adding elements 2,3,4,5 to our present Queue LLQ to make it having at least 4 elements. Insertion Successful will be printed in output to confirm this.
   LLQ_insert(LLQ, 2);LLQ_insert(LLQ, 3);LLQ_insert(LLQ, 4);LLQ_insert(LLQ, 5); 
   
   //Test Case 3: Inserting an item into a queue containing at least 4 elements.
   a = 6; // One more element to be added is a
   printf("\nCase 3: We will insert a sixth element %0.3f to our queue LLQ. We will print the queue and count the elements to confirm that\n", a);
    LLQ_insert(LLQ, a);
    LLQ_print(LLQ);
    t = LLQ_count(LLQ); 
    printf("\nTotal number of element(s) in queue is/are %d.\n", t);
    
    
    //Test Case 4: Returning the maximum and minimum of a queue containing at least 4 elements.
    printf("\nCase 4: We will find maximum and minimum value in our present queue. First lets print the queue and count the elements.\n");
    LLQ_print(LLQ);
    t = LLQ_count(LLQ); 
    printf("\nTotal number of element(s) in queue is/are %d.\nNow, we will display maximum and minimum values.\n", t);
    LLQ_maximum(LLQ);
    LLQ_minimum(LLQ);

    //Test Case 5: Searching for an item present at the beginning, middle, and end of the linked list for a queue containing at least 4 elements.
    printf("\nCase 5: We will search elements at front, end and middle part of Queue. First lets print the queue and count the elements.\n");
    LLQ_print(LLQ);
    t = LLQ_count(LLQ); 
    printf("\nTotal number of element(s) in queue is/are %d.\nNow, we will search elements for 3 cases.\n", t);
    LLQ_Search(LLQ, 1);
    LLQ_Search(LLQ, 3);
    LLQ_Search(LLQ, 6);

    //Test Case 6: Searching for an item that is not present in a queue containing at least 4 elements (errorcase). 
    printf("\nCase 6: We will search for an element 200, which is not in current Queue. It will show an error.First lets print the queue and count the elements.\n");
    LLQ_print(LLQ);
    t = LLQ_count(LLQ); 
    a = 200; // We will search for a which is not present in LLQ
    printf("\nTotal number of element(s) in queue is/are %d.\nNow, we will search for element %0.3f. which will return an error.\n", t,a);
    LLQ_Search(LLQ, a);

    //Test Case 7: Deleting oldest element from the data
    printf("\nCase 7: We will delete oldest element of the queue (index 0), and show the result by printing and counting the elements of queue.\n");
    LLQ_delete(LLQ);
    LLQ_print(LLQ);
    t = LLQ_count(LLQ); 
    printf("\nTotal number of element(s) in queue is/are %d.\n", t);

    //Test Case 8: Deleting all of the items in a queue containing at least 4 elements, one after the other, finally deleting the queue.
    printf("\nCase 8: We will delete all elements of the queue, one by one and show the result by printing and counting the elements of queue.\n");
    LLQ_free(LLQ);
    LLQ_print(LLQ);
    t = LLQ_count(LLQ); 
    printf("\nTotal number of element(s) in queue is/are %d.\n", t);

    //Test Case 9: Deleting an item from an empty queue (error case). 
    printf("\nCase 9: We will try to delete from an empty queue LLQ, but will return an error as there are no elements in it. Check it with print and count commands.\n");
    LLQ_delete(LLQ);
    LLQ_print(LLQ);
    t = LLQ_count(LLQ); 
    printf("\nTotal number of element(s) in queue is/are %d.\n", t);

    printf("\nAll Test Cases checked.\n");

    printf("\nIf you want to enter interactive session, press 1; else press 0 to exit !!\n");
    scanf("%d", &b);

    
   while(b == 1){
      printf("\nYou can test any function here as per your wish!!\n");
      printf("1. Insert an element in queue\n2. Delete oldest element from Queue\n3. Count number of items in queue\n4. Print all elements present in queue\n5. Search a value in Queue\n6. Get Maximum value in LLQueue \n7. Get Minimum value in LLQueue\n8. Delete All elements in LLQ\n9. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	   case 1: printf("Enter the value to be inserted: ");
		        scanf("%lf", &value);
		        LLQ_insert(LLQ, value);
		        break;
	   case 2: LLQ_delete(LLQ); break;
      case 3: t = LLQ_count(LLQ); 
              printf("\nTotal number of elements are %d\n", t);
              break;
	   case 4: LLQ_print(LLQ); break;
	   case 5: printf("Enter the item to be be searched: ");
		        scanf("%lf", &item); 
              LLQ_Search(LLQ, item); break;
      case 6: LLQ_maximum(LLQ); break; 
      case 7: LLQ_minimum(LLQ); break;
      case 8: LLQ_free(LLQ); break;
      case 9: exit(0);
	   default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
   
}


        
   
