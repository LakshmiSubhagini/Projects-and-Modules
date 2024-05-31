#include <stdio.h>
int main() {
    int num,r,c=0;
    scanf("%d",&num);
    int n=num;
    while(n>0)
    {
        r=n%10;
        c=c+r*r*r;
        n=n/10;
    }
    if(num==c)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong Number");
    }

    return 0;
}
