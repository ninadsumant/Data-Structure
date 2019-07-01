#include<stdio.h>
main()
{
  int i,n,key,a[10];
  printf("how many elements?\n");
  scanf("%d",&n);
  printf("\nenter the elements=>\n");
    for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     }
      printf("\nenter the key element\n");
      scanf("%d",&key);
    for(i=0;i<n;i++)
     {
      if(key==a[i])
       {
        printf("%d found at position %d",key,i+1);
        break;
       }
     }
       if(i==n)
       {
         printf("%d element not found",key);
       }
}      

