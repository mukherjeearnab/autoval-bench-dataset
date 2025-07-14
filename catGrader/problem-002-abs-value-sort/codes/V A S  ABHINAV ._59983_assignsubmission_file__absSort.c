int* solve_student(int arr[], int n) {
    // Write solution here

    for (int i = 0; i < n, i++) {
        arr[i] = abs(arr[i]);
    }

    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    int* return_array = arr;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    return return_array;
}