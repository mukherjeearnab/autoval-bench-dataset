int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    int size = sizeof(arr) / sizeof(arr[0]);

    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        return_array[i] = arr[i];
        if (return_array[i] < 0)
            return_array[i] = return_array[i] * (-1);
    }
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (return_array[j] > return_array[j + 1]) {
                int t = return_array[j];
                return_array[j] = return_array[j + 1];
                return_array[j + 1] = t;
            }
        }
    }

    return return_array;
}
