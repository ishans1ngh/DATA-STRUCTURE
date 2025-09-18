#include <stdio.h>

int main() {
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

    k = 0;
    i = 0;
    j = 0;
    int merged[n1 + n2];

    for (; i < n1 && j < n2; k++){
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } 
        else if (arr1[i] == arr2[j])
        {
            merged[k] = arr1[i];
            i++;
            j++;
        }
        
        else {
            merged[k] = arr2[j];
            j++;
        }
    }

    for (; i < n1; i++, k++) {
        merged[k] = arr1[i];
    }

    for (; j < n2; j++, k++) {
        merged[k] = arr2[j];
    }

    printf("Merged array:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
