#include <iostream>
using namespace std;

void recursiveInsertionSort(int arr[], int n) {
    if (n <= 1) return;

    recursiveInsertionSort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

int main() {
    int arr[] = {5, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    recursiveInsertionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
