int* solve_student(int arr[], int n) {
    // Write solution here
    int abs_arr[n];
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            abs_arr[i] = -arr[i];
        } else {
            abs_arr[i] = arr[i];
        }
    }

    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (abs_arr[j] > abs_arr[j + 1]) {
                temp = abs_arr[j];
                abs_arr[j] = abs_arr[j + 1];
                abs_arr[j + 1] = temp;
            }
        }
    }

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        return_array[i] = abs_arr[i];
    }
    return return_array;
}