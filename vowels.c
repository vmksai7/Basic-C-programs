#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leading whitespace

    // Using the conditional operator to check if the character is a vowel
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        ? printf("%c is a vowel.\n", ch)
        : printf("%c is not a vowel.\n");

    return 0;
}
