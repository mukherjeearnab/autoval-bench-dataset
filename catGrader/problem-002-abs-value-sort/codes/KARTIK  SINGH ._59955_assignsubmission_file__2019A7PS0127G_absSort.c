int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            arr[i] *= -1;
    }

    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (return_array[j - 1] > return_array[j]) {
                int temp = return_array[j - 1];
                return_array[j - 1] = return_array[j];
                return_array[j] = temp;
            }
        }
    }
    return return_array;
}