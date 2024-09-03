#include <stdio.h>
int main() {
   int n,m,i,j,c=0;
   scanf("%d%d",&n,&m);
   int a[n],b[m];
   printf("enter first array elements\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("enter second array elements\n");
   for(i=0;i<m;i++)
   {
       scanf("%d",&b[i]);
   }
   if(n!=m)
   {
       printf("Both arrays are not equal");
       return 0;
   }
   printf("sorted array1:");
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               int t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
       }
       printf("%d ",a[i]);
   }
   printf("\nsorted array2:");
   for(i=0;i<m;i++)
   {
       for(j=i+1;j<m;j++)
       {
           if(b[i]>b[j])
           {
               int t1=b[i];
               b[i]=b[j];
               b[j]=t1;
           }
       }
        printf("%d ",b[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]==b[i])
       {
           c=c+1;
       }
   }
   printf("\nc=%d",c);
   if(c==n)
   {
       printf("\nBoth arrays are equal");
   }
   else
   {
       printf("\nBoth arrays are not equal");
   }
}
