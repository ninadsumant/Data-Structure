#include<stdio.h>
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
main()
{
 int i,n,a[10];
 printf("how many elements? =>\n");
 scanf("%d",&n);
 printf("\nenter unsorted elements=>\n");
   for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
 printf("\ndisplay elements =>\n");
   for(i=0;i<n;i++)
    {
       printf("%5d",a[i]);
    }
    
     mergesort(a,0,n-1);
 printf("\nsorted elments =>\n");
   for(i=0;i<n;i++)
    {
       printf("%5d",a[i]);  
    }
}
     void mergesort(int a[],int i,int j)
     {
       int mid;
        if(i<j)
         {
           mid=(i+j)/2;
           mergesort(a,i,mid);
           mergesort(a,mid+1,j);
           merge(a,i,mid,mid+1,j);
         }
     }
     void merge(int a[],int i1,int j1,int i2,int j2)
     {
      int i,j,k,c[10];
      i=i1;
      j=i2;
      k=0;
       while(i<=j1 && j<=j2)
        {
          if(a[i]<a[j])
           {
              c[k]=a[i];
              k++;i++;
           }
	else
	   {
              c[k]=a[j];
              k++;j++;
           }

        }
       while(i<=j1)
        {
              c[k]=a[i];
              k++;i++;
        }
       while(j<=j2)
        {
              c[k]=a[j];
              k++;
              j++;
        }
      for(i=i1,j=0;i<=j2;i++,j++)
        {
              a[i]=c[j];
        }
    }
    
