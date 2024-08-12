#include <stdio.h>

void bubble_sort(int array[], int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int len;
    printf("Enter number of elements: ");
    scanf("%d", &len);

    int array[len];
    for (int i = 0; i < len; i++) {
        printf("Enter a value: ");
        scanf("%d", &array[i]);
    }

    printf("Before sorting: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    bubble_sort(array, len);

    printf("After sorting: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
