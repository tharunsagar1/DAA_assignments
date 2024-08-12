#include <stdio.h>

void destination_sort(int arr[], int l) {
    int choice;
    printf("Do you want ascending (1) or descending (2): ");
    scanf("%d", &choice);

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l - 1; j++) {
            if (choice == 1) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else if (choice == 2) {
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else {
                printf("Invalid option\n");
                return;
            }
        }
    }
    printf("OUTPUT\n");
    for (int i = 0; i < l; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);

    int destination_array[n];
    for (int i = 0; i < n; i++) {
        printf("Enter time to reach destination: ");
        scanf("%d", &destination_array[i]);
    }

    destination_sort(destination_array, n);

    return 0;
}