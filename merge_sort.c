#include <stdio.h>

void merge(int a[], int lb, int mid, int ub) {
    int b[ub - lb + 1];
    int i, j, k;
    i = lb;
    j = mid + 1;
    k = 0;
    while (i <= mid && j <= ub) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= ub) {
        b[k] = a[j];
        j++;
        k++;
    }
    for (k = 0; k < ub - lb + 1; k++) {
        a[lb + k] = b[k];
    }
}

void merge_sort(int a[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        merge_sort(a, lb, mid);
        merge_sort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter a value: ");
        scanf("%d", &arr[i]);
    }

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    merge_sort(arr, 0, n - 1);

    printf("After sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}