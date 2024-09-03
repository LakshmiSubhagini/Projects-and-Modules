#include <stdio.h>
int main() 
{
    int n,m,i,j,sum1=0,sum2=0,sum,ans,e;
    printf("Enter 1st and 2nd array size:");
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    printf("Array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int size=n+m;
    int c[size];
        for(i=0;i<n;i++)
        {
            c[i]=a[i];
        }
        e=0;
        for(i=n;i<m+n;i++)
        {
            c[i]=b[e];
            e++;
        }
    printf("Merged Array:");
    for(i=0;i<size;i++){
        printf("%d ",c[i]);
    }
    printf("\nSorted Merged Array:");
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(c[i]>c[j])
            {
                int t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
         printf("%d ",c[i]);
    }
    if(size%2!=0){
    printf("\nMedian is:%d",c[size/2]);
    return 0;
    }
    else
    {
        int m1=size/2;
        sum=c[m1]+c[m1-1];
        ans=sum/2;
        printf("\nMedian is:%d",ans);
        return 0;
    }
}
