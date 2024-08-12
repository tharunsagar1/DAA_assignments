#include <stdio.h>

void priority_number(int arr[], int l) {
    int i, j, min_index, temp;
    for (i = 0; i < l - 1; i++) {
        min_index = i;
        for (j = i + 1; j < l; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    printf("After Sorting Orders Priority: ");
    for (i = 0; i < l; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter number of priority numbers: ");
    scanf("%d", &num);

    int priority_number_array[num];
    for (int i = 0; i < num; i++) {
        printf("Enter orders Priority Number: ");
        scanf("%d", &priority_number_array[i]);
    }

    priority_number(priority_number_array, num);

    return 0;
}