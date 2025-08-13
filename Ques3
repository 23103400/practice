#include <stdio.h>
#include <string.h>
//using namespace std

int main() {
    char s[1000];
    int i, len;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline if present
    len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        putchar(s[i]);
    }

    printf("\n");
    return 0;
}
