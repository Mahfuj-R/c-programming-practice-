#include <stdio.h>

int main() {
    int n, i, position, number;

    
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n + 1];   

    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter number to insert: ");
    scanf("%d", &number);

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &position);

   
    if(position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }

    
    for(i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

   
    arr[position] = number;

    
    printf("Updated array:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}