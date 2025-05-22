#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key, int index = 0) {
    if (index == size) return -1; 
    if (arr[index] == key) return index;
    return linearSearch(arr, size, key, index + 1); 
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    int result = linearSearch(arr, size, key);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}