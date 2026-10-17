#include <stdio.h>
int main() {
    int stock[] = {25, 12, 8, 40, 5, 18, 3, 22};
    int n = sizeof(stock) / sizeof(stock[0]);
    int item, sold;
    int total = 0;
    int least = stock[0];
    int leastPosition = 0;
    printf("Initial Stock:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: %d units\n", i + 1, stock[i]);
        if (stock[i] < 10) {
            printf("Item %d is LOW on stock - reorder required\n",i + 1);
        }
    }
    while (1) {
        printf("\nEnter item number (1-%d), or 0 to stop: ", n);
        scanf("%d", &item);
        if (item == 0) {
            break;
        }
        if (item < 1 || item > n) {
            printf("Invalid item number!\n");
            continue;
        }
        printf("Enter quantity sold: ");
        scanf("%d", &sold);
        if (sold < 0) {
            printf("Quantity cannot be negative!\n");
        } else if (sold > stock[item - 1]) {
            printf("Error: Not enough stock!\n");
        } else {
            stock[item - 1] = stock[item - 1] - sold;
            printf("Stock updated successfully.\n");
        }
    }
    printf("\nFinal Stock Levels:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: %d units\n", i + 1, stock[i]);
        total = total + stock[i];
        if (stock[i] < least) {
            least = stock[i];
            leastPosition = i;
        }
        if (stock[i] < 10) {
            printf("LOW on stock - reorder required\n");
        }
    }
    printf("\nTotal Units Remaining = %d\n", total);
    printf("Least Stock = %d units\n", least);
    printf("Item Position = %d\n", leastPosition + 1);

    return 0;
}

