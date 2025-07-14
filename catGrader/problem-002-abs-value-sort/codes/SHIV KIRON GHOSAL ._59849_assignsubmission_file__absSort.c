int* solve_student(int arr[], int n) {
    // Write solution here
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) arr[i] = -1 * arr[i];
    }
    int return_array[n] = arr;
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (return_array[j] > return_array[j + 1]) {
                int temp = return_array[j];
                return_array[j] = return_array[j + 1];
                return_array[j + 1] = temp;
            }
        }
    }
    // int* return_array;
    // Uncomment the following line and replace n with size of array
    // return_array = (int*)malloc(n*sizeof(int));
    return return_array;
}