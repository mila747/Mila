#include <stdio.h>
#include <string.h>

void reverseFullString(char str[]) {
    int i, len;
    char temp;

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char text[] = "Sunchon National University";

    printf("Original String: %s\n", text);

    reverseFullString(text);

    printf("Reversed String: %s\n", text);

    return 0;
}
