int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
        if (arr[i] < 0) {
            return_array[i] *= -1;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (return_array[i] > return_array[j]) {
                int temp = return_array[j];
                return_array[j] = return_array[i];
                return_array[i] = temp;
            }
        }
    }

    return return_array;
}