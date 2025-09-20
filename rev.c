#include <stdio.h>
#include <string.h>

void reverse() {
    char str[100], rev[100];
    int i, len, j = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);   // Note: this won't take spaces. Use fgets for full lines.

    len = strlen(str);

    // Reverse the string
    for (i = len - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';  // Null terminate the reversed string

    printf("Reversed string: %s\n", rev);

    // return 0;
}
