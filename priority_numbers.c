/*Imagine you're working for a large online marketplace company that facilitates the
buying and selling of various products. As part of the order processing system, the
company receives thousands of new orders every minute from customers all around
the world. To ensure efficient and timely order fulfillment, the orders need to be
sorted based on various criteria before they can be processed and shipped.
Some customers may request advanced shipping or have urgent requirements.
So, implement an application to arrange the Orders based on priority Number*/
    
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
