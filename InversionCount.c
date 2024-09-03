#include <stdio.h>
int main() 
{
    int n,i,j,sum=0,c;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("Array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
            {
               
                if(a[i]>a[j])
                {
                    c++;
                }
        }
        printf("Inversion count of %d:%d\n",a[i],c);
        sum=sum+c;
    }
    printf("\nSum of Inversion count:%d",sum);
    
    return 0;
}
