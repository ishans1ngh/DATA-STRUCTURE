#include <stdio.h>

int main (){
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        if (arr[i] != i + 1){
            printf("Missing element is: %d\n", i + 1);
            break;
        }
    }
}