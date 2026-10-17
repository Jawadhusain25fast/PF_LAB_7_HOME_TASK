#include <stdio.h>
int main() {
    float marks[10];
    float sum = 0, average;
    int count = 0;
    for (int i = 0; i < 10; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
        while (marks[i] < 0 || marks[i] > 20) {
            printf("Invalid marks! Enter marks from 0 to 20: ");
            scanf("%f", &marks[i]);
        }
        sum = sum + marks[i];
    }
    average = sum / 10;
    printf("\nOriginal Student Report:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %.2f - ", i + 1, marks[i]);
        if (marks[i] >= 18) {
            printf("Excellent\n");
        } else if (marks[i] >= 14) {
            printf("Good\n");
        } else if (marks[i] >= 10) {
            printf("Average\n");
        } else {
            printf("Needs Improvement\n");
        }
    }
    printf("\nClass Average = %.2f\n", average);
    for (int i = 0; i < 10; i++) {
        if (marks[i] > average) {
            count++;
        }
    }

    printf("Students above average = %d\n", count);
    for (int i = 0; i < 10; i++) {
        marks[i] = marks[i] + 1.5;
        if (marks[i] > 20) {
            marks[i] = 20;
        }
    }
    printf("\nRevised Student Report:\n");
    sum = 0;
    for (int i = 0; i < 10; i++) {
        sum = sum + marks[i];
        printf("Student %d: %.2f - ", i + 1, marks[i]);
        if (marks[i] >= 18) {
            printf("Excellent\n");
        } else if (marks[i] >= 14) {
            printf("Good\n");
        } else if (marks[i] >= 10) {
            printf("Average\n");
        } else {
            printf("Needs Improvement\n");
        }
    }
    printf("Revised Class Average = %.2f\n", sum / 10);

    return 0;
}

