#include <stdio.h>
int main() {
    int temp[] = {31, 33, 35, 34, 38, 36, 32};
    int n = sizeof(temp) / sizeof(temp[0]);
    int highest, lowest;
    float sum, average;
    highest = temp[0];
    lowest = temp[0];
    sum = 0;
    printf("Original Temperatures:\n");
    for (int i = 0; i < n; i++) {
        printf("Day %d: %d C\n", i + 1, temp[i]);
        sum = sum + temp[i];
        if (temp[i] > highest) {
            highest = temp[i];
        }
        if (temp[i] < lowest) {
            lowest = temp[i];
        }
    }
    average = sum / n;
    printf("\nHighest Temperature = %d C\n", highest);
    printf("Lowest Temperature = %d C\n", lowest);
    printf("Average Temperature = %.2f C\n", average);
    temp[2] = 37;
    highest = temp[0];
    lowest = temp[0];
    sum = 0;
    printf("\nUpdated Temperatures:\n");
    for (int i = 0; i < n; i++) {
        printf("Day %d: %d C\n", i + 1, temp[i]);
        sum = sum + temp[i];
        if (temp[i] > highest) {
            highest = temp[i];
        }
        if (temp[i] < lowest) {
            lowest = temp[i];
        }
    }
    average = sum / n;
    printf("\nUpdated Highest = %d C\n", highest);
    printf("Updated Lowest = %d C\n", lowest);
    printf("Updated Average = %.2f C\n", average);
    printf("\nMemory Addresses:\n");
    for (int i = 0; i < n; i++) {
        printf("temp[%d] address = %p\n", i, (void *)&temp[i]);
    }
    return 0;
}

