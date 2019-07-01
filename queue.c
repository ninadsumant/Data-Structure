#include<stdio.h>
#include<stdlib.h>
#define MAX=5
int front=-1,rear=-1;
main()
{
int choice,no,pos;
  while(1)
    {
      printf("1.insert\n2.add\n3.delete\n4.peek\n5.isempty\n6.isfull\n7.quit\n");
      printf("enter your choice");
      scanf("%d",&choice);
      switch(choice)
        {
          case 1:printf("enter the elements");
                 scanf("%d",&no);
                 insert(no);
                 break;
          case 2:printf("enter the element\n");
                 scanf("%d",&no); 
                 printf("enter the position where element is to inserted\n");
                 scanf("%d",&pos);
                 add(no,pos);
                 break;
          case 3:printf("enter the element is to be deleted\n");
                 scanf("%d",&no);
                 delete();
                 break;
          case 4:peek();
                 break;
          case 5:isempty();
                 break;
          case 6:isfull();
                 break;
         default:printf("invalid choice");
                 break;
        }                    
    }  
}    
