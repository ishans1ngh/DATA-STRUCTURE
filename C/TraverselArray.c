#include <stdio.h>

int main(){
    int n;
    printf("eneter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
        printf("enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("the elements in the array are: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}