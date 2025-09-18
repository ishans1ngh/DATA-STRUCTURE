#include <stdio.h>


int main() {
    int arr[100], n, i, j, inval;
    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value to be inserted: ");
    scanf("%d", &inval);
 
    for (i = 0; i < n; i++) {
        if (arr[i] > inval)
            break;
    }

     for (j = n; j > i; j--)
        arr[j] = arr[j - 1];

    arr[i] = inval;  
    n++;             

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
