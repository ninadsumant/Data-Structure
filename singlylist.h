#include<stdio.h> 
#include<malloc.h>
struct node 
{
  int info;
  struct node *link;
}*start;
create_list(int data)
{
  struct node *q,*temp;
  temp=malloc(sizeof(struct node));
  temp->info=data;
  temp->link=NULL;
  if(start=NULL)
   start=temp;
  else
  {
    q=start;
    while(q->link!=NULL)
     {
      q=q->link;
     }
    q->link=temp;
  }
}
insert(int m,int pos)
{
  struct node *q,*temp;
  int i;
  q=start;
  for(i=0;i<pos-1;i++)
   {
    q=q->link;
    if(q=NULL)
     {
       printf("there are less than %d elements",pos);
       return;
     }
   }
   temp=malloc(sizeof(struct node));
   temp->link=q->link;
   q->link=temp;
}
del(int data)
{
  struct node *q,*temp;
  if(start->info==data)
   {
    temp=start;
    start=start->link;
    free(temp);
    return;
   }
 q=start;
 while(q->link->link!=NULL)
  {
   if(q->link->info==data)
    {
     temp=q->link;
     free(temp);
     q->link=NULL;
     return;
    }
   printf("element %d noy found\n",data);
  }
}
display()
{
  struct node *q;
  if(start==NULL)
   {
    printf("list is empty");
    return;
   }
  q=start;
  printf("list is =>\n");
   while(q!=NULL)
    {
      printf("%d",q->link);
      q=q->link;
    }
  printf("\n");
}
search(int data)
{
  struct node *q=start;
  int pos=1;
  while(q!=NULL)
   {
    if(q->info==data)
     {
       printf("element %d found at position %d",data,pos);
       return;
     }
     q=q->link;
     pos++;
   }
  if(q==NULL) 
   {
    printf("element %d not found",data);
   }
}     
  
     
      
 
  
     
