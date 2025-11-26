#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    int *px = &x;
    int *py = &y;

    int **ppx = &px;
    int **ppy = &py;

    printf("Before swap: x=%d, y=%d\n", x, y);
    swap(*ppx, *ppy);
    printf("After swap: x=%d, y=%d\n", x, y);

    return 0;
}
