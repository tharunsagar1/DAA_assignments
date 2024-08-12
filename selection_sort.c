#include <stdio.h>

void selection_sort(int array[], int l) {
    int i, j, min, temp;

    for (i = 0; i < l - 1; i++) {
        min = i;
        for (j = i + 1; j < l; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
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

    selection_sort(array, n);

    printf("After sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}