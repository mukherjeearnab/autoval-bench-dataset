int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int i, j;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            return_array[i] = arr[i] * (-1);
        } else {
            return_array[i] = arr[i];
        }
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (return_array[j] > return_array[j]) {
                int temp = return_array[j];
                return_array[j] = return_array[j + 1];
                return_array[j + 1] = temp;
            }
        }
    }

    return return_array;
}