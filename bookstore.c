#include <stdio.h>

void book_price_sort(int arr[], int l) {
    int choice;
    printf("Do you want ascending (1) or descending (2): ");
    scanf("%d", &choice);
    
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < l - 1; j++) {
            if(choice == 1) {
                if(arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else if(choice == 2) {
                if(arr[j] < arr[j + 1]) {
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
    
    printf("Prices after sorting: ");
    for(int i = 0; i < l; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter number of books: ");
    scanf("%d", &num);

    int price_array[num];
    for(int i = 0; i < num; i++) {
        printf("Enter price of book: ");
        scanf("%d", &price_array[i]);
    }

    book_price_sort(price_array, num);

    return 0;
}
