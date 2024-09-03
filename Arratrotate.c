#include <stdio.h>
int main() {
    int n, i, a[100], d;
    scanf("%d", &n); 
    scanf("%d", &d); 
    for(i = 0; i < n; i++) { 
        scanf("%d", &a[i]);
    }
    for(i = d; i < n; i++) {
        printf("%d ", a[i]);
    }
    for(i = 0; i < d; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
