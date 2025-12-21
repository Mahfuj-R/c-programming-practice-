#include <stdio.h>

int main() {
    char str[200];
    int i, count = 0;

    // Take input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count vowels
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    // Output result
    printf("Number of vowels: %d\n", count);

    return 0;
}
