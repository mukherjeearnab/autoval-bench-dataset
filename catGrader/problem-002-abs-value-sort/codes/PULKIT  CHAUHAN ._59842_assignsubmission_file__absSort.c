int* solve_student(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            return_array[i] = arr[i];
        else
            return_array[i] = -1 * arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++)
            if (return_array[i] > return_array[i + 1]) {
                int temp = return_array[i];
                return_array[i] = return_array[i + 1] return_array[i + 1] = temp;
            }
    }

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    return return_array;
}