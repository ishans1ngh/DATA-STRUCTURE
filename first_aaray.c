#include <stdio.h>

void ArrFunction(int *arr, int size) {
     
    printf("First element: %d\n", *arr);
    
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    ArrFunction(arr, n);
    return 0;
}
