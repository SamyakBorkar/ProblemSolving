import java.util.Arrays;

class MergeSortedArraysSolution {
    public static void main(String[] args) {
        int arr1[] = {1, 2, 3, 5, 7, 9};
        int arr2[] = {0, 2, 4, 6, 8};
        int n = arr1.length;
        int m = arr2.length;
        int k = 0;
        int arr3[] = new int[n + m];
        
        // Merge arrays
        for (int i = 0; i < n; i++) {
            arr3[i] = arr1[i];
        }
        for (int j = 0; j < m; j++) {
            arr3[n + j] = arr2[j];
        }
        
        // Print merged array before sorting
        System.out.println("Merged array before sorting: " + Arrays.toString(arr3));
        
        // Sort merged array
        Arrays.sort(arr3);
        System.out.println("Sorted merged array: " + Arrays.toString(arr3));
        
        // Filter out zeros and move non-zero elements to the front
        for (int i = 0; i < n + m; i++) {
            if (arr3[i] != 0) {
                arr3[k] = arr3[i];
                k++;
            }
        }
        
        // Print the array without trailing zeros
        int[] result = Arrays.copyOf(arr3, k);
        System.out.println("The final array without zeros is: " + Arrays.toString(result));
    }
}
