#include <stdio.h>
int main() 
{
    int n,i,j,sum1=0,sum2=0,m;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("Array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2!=0)
    {
        m=n/2;
        for(i=0;i<m;i++)
        {
            sum1=sum1+a[i];
        }
        for(i=m+1;i<n;i++)
        {
            sum2=sum2+a[i];
        }
    }
    if(sum1==sum2){
        printf("Equilibrium index of an array:%d",m+1);
        return 0;
    }
    else
    {
        printf("-1");
    }
    
}
