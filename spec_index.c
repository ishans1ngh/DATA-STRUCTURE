#include <stdio.h>

int displayArray(int arr[], int size, int index) {
    if (index >= size) {
        return 0;  
    }
    printf("%d ", arr[index]);
     
}

int main() {
    int n, m;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the starting index for display: ");
    scanf("%d", &m);
    printf("Array element: ");
    
    displayArray(arr, n, m);
    printf("\n");
    return 0;
}