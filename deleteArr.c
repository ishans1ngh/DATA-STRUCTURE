#include <stdio.h>

int main() {
    int n, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];  
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete the element (0 to %d): ", n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;  

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}