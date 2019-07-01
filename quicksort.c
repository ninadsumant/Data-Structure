#include<stdio.h>
int partition(int a[],int,int);
void quick(int a[],int,int);
main()
{
  int i,n,a[10];
  printf("\nenter the elements=>\n");
  scanf("%d",&n);
  printf("\nenter unsorted elements\n");
     for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }  
  printf("\ndisplay unsorted elements=>\n");
     for(i=0;i<n;i++)
      {
        printf("%5d",a[i]);
      }
    quick(a,0,n-1);
  printf("\nsorted array is=>\n");
     for(i=0;i<n;i++)
      {
        printf("%4d",a[i]);
      }
}
  void quick(int a[],int l,int u)
   {
    int j;
      if(l<u)
        {
          j=partition(a,l,u);
          quick(a,l,j-1);
          quick(a,j+1,u);
        }
   }
  int partition(int a[],int l,int u)
   {
     int pivot,i,j,temp;
     pivot=a[l];
     i=l;
     j=u+1;
       do
        {
         do
          {
           i++;
        }
         while(a[i]>pivot && i<=j);
          do
           {
            j--;
           }
         while(a[j]>pivot);
            if(i<j)
             {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
             }
   }
         while(i<j);
         a[l]=a[j];
         a[j]=pivot;
         return (j);
}              
