int *solve_student(int arr[], int n) {
    int *return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int *)malloc(n * sizeof(int));
    int ind = -1;
    for (int j = 0; j < n; j++) {
        if (arr[ind] < 0) {
            return_array[ind] = -1 * arr[ind];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (return_array[j] < return_array[i]) {
                int temp = return_array[i];
                return_array[i] = return_array[j];
                return_array[j] = temp;
            }
        }
    }
    return return_array;
}