#include <stdio.h>

int main (){
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);

    int arr[n+1];
    for (int i = 0; i < n; i++){
        printf("enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int pos, value;
    printf("enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &pos);
    
    if (pos < 0 || pos > n){
        printf("Invalid position!\n");
        return 1;
    }

    printf("enter the value to insert: ");
    scanf("%d", &value);

    for (int i = n; i >= pos - 1; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    

    printf("Array after insertion: ");
    for (int i = 0; i <= n ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
        