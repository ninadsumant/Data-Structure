#include<stdio.h>
main()
{
 int i,j,n,a[10],temp;
 printf("how many elements? =>\n");
 scanf("%d",&n);
 printf("\nenter unsorted elements =>\n");
  for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
    printf("\ndisplay unsorted elements =>\n");
     for(i=0;i<n;i++)
      {
       printf("%5d",a[i]);
      }
     for(i=0;i<n-1;i++)
      {
       for(j=0;j<n-1-i;j++)
        {
         if(a[j]<a[j+1])
          {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
          }
        }
       }
     printf("\ndisplay sorted elements =>\n");
       for(i=0;i<n;i++)
        {
          printf("%4d",a[i]);
        }
}
