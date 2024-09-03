#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n], i, c = 0, b = 0;
    for (i = 0; i < n-1; i++) {
        scanf("%d", &a[i]);
    }
    for (i = a[0]; i <= a[n-2]; i++) {
        c = c + i;
    }
    printf("%d ", c);
    for (i = 0; i < n-1; i++) {
        b = b + a[i];
    }
    printf("%d ", b);
    int ans = c - b;
    printf("\n%d", ans);

    return 0;
}
