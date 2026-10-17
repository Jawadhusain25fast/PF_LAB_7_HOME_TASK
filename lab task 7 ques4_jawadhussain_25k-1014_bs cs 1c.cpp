#include <stdio.h>
int main() {
    char name[20];
    int count = 0;
    printf("Enter username (letters only): ");
    scanf("%19[A-Za-z]", name);
    printf("\nCharacters Stored:\n");
    for (int i = 0; name[i] != '\0'; i++) {
        printf("Character at index %d: %c\n", i, name[i]);
        count++;
    }
    printf("\nTotal Characters = %d\n", count);
    if (name[0] >= 'a' && name[0] <= 'z') {
        name[0] = name[0] - 32;
    }
    printf("Final Username = %s\n", name);
    return 0;
}

