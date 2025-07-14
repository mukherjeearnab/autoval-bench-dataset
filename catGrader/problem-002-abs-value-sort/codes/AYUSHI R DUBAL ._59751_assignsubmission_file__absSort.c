int* solve_student(int arr[], int n) {
    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0)
            return_array[i] = -arr[i];
        else
            return_array[i] = arr[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (return_array[i] < return_array[j]) {
                int temp = return_array[i];
                return_array[i] = return_array[j];
                return_array[j] = temp;
            }
        }
    }

    return return_array;
}