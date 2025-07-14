int* solve_student(int arr[], int n) {
    // Write solution here
    for (int i = 0; i < n; i++) {
        arr[i] = abs(arr[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    *return_array = arr;
    return return_array;
}