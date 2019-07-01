#include<stdio.h>
#include"stack1.h"

main()
{
  int choice;
  while(1)
    {
      printf("1.push\n2.pop\n3.peek\n4.isempty\n5.isfull\n6.quit\n");
      printf("enter your choice");
      scanf("%d",&choice);
      switch(choice)
        {
          case 1:push();
                 break;
          case 2:pop();
                 break;
          case 3:peek();
                 break;
          case 4:isempty();
                 break;
          case 5:isfull();
                 break;
         default:printf("invalid choice");
                 break;
        }                    
    }  
}    
