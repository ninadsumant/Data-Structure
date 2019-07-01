#include<stdio.h>
#define MAX 5
int top=-1;
int a[MAX];
push(s,x)
{
  int no;
  if(top==(MAX-1)) 
   printf("stack is full\n");
  else
   {
     printf("enter an element");
     scanf("%d",&no);
       top=top+1;
       a[top]=no;
   }
}           
pop(s)
{
   if(top==-1)
   printf("stack is empty\n");
    else
      {
        printf("popped elemnt is %d\n",a[top]);
        top=top-1;
      }
}   
peek(s)
{
   if(top==-1)
   printf("stack is full\n");
    else
      {
        printf("peeked elemnt is %d\n",a[top]);
      }
}      
isempty(s)
{
   if(top=-1)
   printf("stack is empty\n");
}
isfull(s)
{
    if(top==MAX-1)
    printf("stack is full\n"); 
     else
     {
       printf("stack is not full\n");
     }
}       

