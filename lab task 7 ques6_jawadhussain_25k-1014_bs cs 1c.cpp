#include <stdio.h>
int main() {
    int queue[15];
    int count = 0;
    int token;
    int choice;
    printf("Enter patient token numbers (-1 to stop):\n");
    while (count < 15) {
        printf("Enter token: ");
        scanf("%d", &token);
        if (token == -1) {
            break;
        }
        queue[count] = token;
        count++;
    }
    printf("\nCurrent Queue:\n");
    for (int i = 0; i < count; i++) {
        printf("Position %d -> Token %d\n", i + 1, queue[i]);
    }
    while (count > 0) {
        printf("\n1. Call next patient\n");
        printf("2. Insert emergency patient\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Calling patient token: %d\n", queue[0]);
            for (int i = 0; i < count - 1; i++) {
                queue[i] = queue[i + 1];
            }
            count--;
        } 
        else if (choice == 2) {
            if (count == 15) {
                printf("Queue is full! Cannot insert emergency.\n");
            } else {
                printf("Enter emergency token: ");
                scanf("%d", &token);
                for (int i = count; i > 0; i--) {
                    queue[i] = queue[i - 1];
                }
                queue[0] = token;
                count++;
                printf("Emergency patient inserted.\n");
            }
        } 
        else if (choice == 3) {
            break;
        } 
        else {
            printf("Invalid choice!\n");
        }
        printf("\nCurrent Queue:\n");
        if (count == 0) {
            printf("No patients waiting.\n");
        }
        for (int i = 0; i < count; i++) {
            printf("Position %d -> Token %d\n", i + 1, queue[i]);
        }
    }
    if (count == 0) {
        printf("\nAll patients have been called.\n");
    }
    return 0;
}

