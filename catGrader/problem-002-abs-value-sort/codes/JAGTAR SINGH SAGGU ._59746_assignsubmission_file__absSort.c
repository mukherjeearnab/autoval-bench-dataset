int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 1; i <= n; i++) {
        if (arr[i - 1] >= 0) {
            return_array[i - 1] = arr[i - 1];
        } else {
            return_array[i - 1] = -1 * arr[i - 1];
        }
    }

    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
            if (arr[k] < arr[j]) {
                int t = arr[j];
                arr[j] = arr[k];
                arr[k] = t;
            }
        }
    }

    return return_array;
}
