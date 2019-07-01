#include<stdio.h>
main()
{
 int i,j,n,key,a[10];
 printf("how many elements?\n");
 scanf("%d",&n);
 printf("\nenter the elements =>\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
 printf("\nenter unsorted elements\n");
  for(i=0;i<n;i++)
  {
    printf("%5d",a[i]);
  }
  for(i=0;i<n;i++)
  {
   key=a[i];
    for(j=i-1;j>=0 && key<a[j];j--)
       { 
         a[j+1]=a[j];
       }
   
    // key=a[j];
    // a[j]=a[j+1];
     a[j+1]=key;
    
  }
 printf("\nsorted elements =>\n");
  for(i=0;i<n;i++)
  {
   printf("%4d",a[i]);
  }
}
 
