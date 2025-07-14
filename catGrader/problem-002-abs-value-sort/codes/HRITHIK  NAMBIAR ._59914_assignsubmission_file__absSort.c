int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(100 * sizeof(int));
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = arr[i] * -1;
        }
    }
    // sort arr
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                int a;
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
    }
    return return_array;
}