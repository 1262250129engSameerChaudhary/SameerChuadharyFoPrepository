#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int ec = 0, oc = 0;

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even[ec++] = arr[i];   // Even number
        else
            odd[oc++] = arr[i];    // Odd number
    }

    printf("\nEven numbers are: ");
    for (i = 0; i < ec; i++)
        printf("%d ", even[i]);

    printf("\nOdd numbers are: ");
    for (i = 0; i < oc; i++)
        printf("%d ", odd[i]);

    printf("\n");
    return 0;
}
