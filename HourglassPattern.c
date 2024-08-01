#include <stdio.h>
int main() {
    int i,j,k,rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
    for(k=1;k<i;k++)
        printf(" ");
    for(j=i;j<=rows;j++)
    printf("* ");
    printf("\n");
    }
    for(i=rows-1;i>=1;i--)
    {
    for(k=1;k<i;k++)
        printf(" ");
    for(j=i;j<=rows;j++)
    printf("* ");
    printf("\n");
    }
    return 0;
}
