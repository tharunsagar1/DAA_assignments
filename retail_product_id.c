
/*Imagine you are working for a retail store that sells a wide variety of products. The
store has a vast inventory with thousands of items, and it's becoming challenging for
the employees to manage and locate products efficiently. Customers often ask for
specific items, and employees need to find them quickly. The sorting program's
primary goal is to organize the products in the inventory systematically, allowing for
faster and easier access to items when needed.
Implement an efficient sorting algorithm to arrange the products based on product
IDs*/
#include <stdio.h>

void product_id_sort(int arr[], int l) {
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

    printf("After Sorting Product IDs: ");
    for (i = 0; i < l; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of id's: ");
    scanf("%d", &n);

    int product_id_array[n];
    for (int i = 0; i < n; i++) {
        printf("Enter Products IDs: ");
        scanf("%d", &product_id_array[i]);
    }

    product_id_sort(product_id_array, n);

    return 0;
}
