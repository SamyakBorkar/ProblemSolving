#include <stdio.h>
#include <stdbool.h>

int main() {
    int N, num, pos = -1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the array elements:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element you want to delete from the array: ");
    scanf("%d", &num);

    bool found = false;
    for (int i = 0; i < N; i++) {
        if (arr[i] == num) {
            pos = i;
            found = true;
            break;
        }
    }

    if (found) {
        printf("Element %d is found at position %d\n", num, pos);

        for (int i = pos; i < N - 1; i++) {
            arr[i] = arr[i + 1];
        }

        N--;

        printf("New Array:\n");
        for (int i = 0; i < N; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Element %d not found in the array.\n", num);
    }

    return 0;
}

