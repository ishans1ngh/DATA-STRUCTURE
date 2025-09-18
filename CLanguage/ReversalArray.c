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

    printf("Array before reversal: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("array after reversal: ");
    for (int i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;

}