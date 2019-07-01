#include<stdio.h>
#include"singlylist.h"
main()
{
  int i,m,n,a[10],pos,choice;
  while(1)
   {
     printf("1.create_list\n2.insert\n3.search\n4.display\n5.delete\n6.quit\n");
     printf("enter your choice\n");
     scanf("%d",&choice);
      switch(choice)
      {
        case 1:printf("how many elements do you want?");
               scanf("%d",&n);
               for(i=0;i<n;i++)
                {
                 printf("enter the elements\n");
                 scanf("%d",&m);
                 create_list(m);
                }  
                break;
        case 2:printf("insert the elements\n");
               scanf("%d",&m);
               printf("enter the position after which element to be added");
               scanf("%d",&pos);
               insert(m,pos);
               break;
        case 3:printf("search\n");
               scanf("%d",&m);
               search(m);
               break;
        case 4:display();
               break;
        case 5:if(start==NULL)
                {
                 printf("list is empty\n");
                 continue;
                } 
               printf("enter an element for deletion");
               scanf("%d",&m);
               del(m);
               break;
        case 6:exit(1);
       default:printf("invalid choice\n");
      }
   }
}

 

    
