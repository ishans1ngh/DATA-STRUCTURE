#include <stdio.h>

int main (){
    int n1, n2, i, j, k;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d elements in first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter %d elements in second array:\n", n2);
    for (j = 0; j < n2; j++) {
        scanf("%d", &arr2[j]);
    }

     int arr3[n1 - n2];
}