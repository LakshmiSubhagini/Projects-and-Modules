#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[10];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]!=0)
       {
           printf("%d ",a[i]);
       }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("%d ",a[i]);
        }
    }
return 0;
}
