#include <stdio.h>

int main (){
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
        printf("enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("enter the position to delete the element (1 to %d): ", n);
    scanf("%d", &pos);  

    if (pos < 1 || pos > n){
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = pos - 1; i < n; i++){
        arr[i] = arr[i + 1];

    }
    
    printf("Array after deletion:\n");
    for (int i = 0; i < n - 1; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}