#include<stdio.h>
main()
{
  int l,m,h,i,n,a[10],key;
  printf("\n how many elements you want?");
  scanf("%d",&n);
  printf("\nenter the elements ");
    for(i=0;i<n;i++)
       {
         scanf("%d",&a[i]);
       }
  printf("enter the element to search\n");
  Scanf("%d",&key);
   l=0;
   h=n-1; 
   m=(l+h)/2;
//   while(l<=h)
   while (key!=a[m] && l<=h)
     {
      
        if(key>a[m])
         {
	  l=m+1;
          
        }
	else
           h = m -1;
           m = (l + h)/2;
     }
      
    if(key==a[m])
     {
       printf("\n%d elements found",key);
     }
    if(l>h)
      printf("%d element not found",key);
}
