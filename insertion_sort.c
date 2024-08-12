#include <stdio.h>

void insertion_sort(int array[], int l) {
    int i, key, j;
    for (i = 1; i < l; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Enter a value: ");
        scanf("%d", &array[i]);
    }

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    insertion_sort(array, n);

    printf("After sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}