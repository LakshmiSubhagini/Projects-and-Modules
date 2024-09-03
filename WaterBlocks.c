#include <stdio.h>
int main() {
    int n, i, a[100], c, b = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    if (a[0] <= a[n-1]) {
        for (i = 1; i <= n-2; i++) { 
            if (a[i] < a[0]) {
                c = a[0] - a[i]; 
                b = b + c;
            } else if (a[i] >= a[0]) {
                break;
            }
        }
    } else if (a[0] > a[n-1]) {
        for (i = 1; i <= n-2; i++) {
            if (a[i] < a[n-1]) {
                c = a[n-1] - a[i];
                b = b + c;
            } else if (a[i] >= a[n-1]) {
                break;
            }
        }
    }
    printf("%d", b);
    return 0;
}
