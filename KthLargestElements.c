#include <stdio.h>
int main() {
   int n,k;
   printf("enter array size:");
   scanf("%d",&n);
   int a[n],i,j;
   printf("enter array elements:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("enter k value to print kth largest element:");
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]<a[j])
           {
               int t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
       }
   }
   for(i=0;i<k;i++)
   {
       printf("%d ",a[i]);
   }
}
