#include<stdio.h>
int main(){
    int n,i,j,c;
    printf("Array size:");
    scanf("%d",&n);
    printf("Array elements:");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element in an array that occurs exactly once:");
    for(i=0;i<n;i++)
    {   c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    if(c==1)
    {
        printf("%d ",a[i]);
    }
}
}
