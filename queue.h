#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1,rear=-1;
int a[MAX];

insert(q)
 {
   if(rear==(MAX-1))
    {
      printf("queue is full\n");
    }
   else
    { 
      if(front==-1)
      front=0;
      printf("enter the element\n");  
      scanf("%d",&q);
      rear=rear+1;
      a[rear]=q;
    }
 }
delete(q)
 {
  if(front=-1||front>rear)
   {
     printf("queue is full\n");
   }
  else
   {
     front=front+1;
   }           
 }
peek()
 {
   int i;
   i=front+1;
   printf("peek element is %d\n",i); 
 }
isempty()
 {
   if(front==-1 && rear==-1)
    {
      printf("queue is empty\n");
    }
   else
    {
      printf("queue is not empty\n"); 
    }
 }
isfull()
 {
   if(rear=(MAX-1))
    {
      printf("queue is full\n");
    }
   else
    {
      printf("queue is not full\n");
    }           
 }  
