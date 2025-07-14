int* solve_student(int arr[], int n) {
    // Write solution here
    n = sizeof(arr) / sizeof(arr[0]);

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    // Given an integer array ‘A‘ of length ‘N’ which is sorted in non-decreasing order, return an array ‘B’ of length ‘N’’ with absolute value of elements in ’A’ sorted in non-decreasing order.
    for (int i = 0; i < n; i++) {
        return_array[i] = abs(arr[i]);
    }
    sort(return_array, return_array + n);
    return return_array;
}