#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {5, 4, 3, 2, 1};
    int sum[5];
    int i;

    for(i = 0; i < 5; i++) {
        sum[i] = a[i] + b[i];
    }

    printf("Sum array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
