int* solve_student(int arr[], int n) {
    int i, j, temp;
    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        return_array[i] = abs(arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (return_array[i] > return_array[j]) {
                temp = return_array[i];
                return_array[i] = return_array[j];
                return_array[j] = temp;
            }
        }
    }
    return return_array;
}