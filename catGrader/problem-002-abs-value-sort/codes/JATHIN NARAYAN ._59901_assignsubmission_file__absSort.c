int* solve_student(int arr[], int n) {
    int size = n;

    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(size * sizeof(int));
    for (int step = 0; step < size - 1; step++) {
        for (int i = 0; i < size - step - 1; ++i) {
            if (abs(arr[i]) > abs(arr[i + 1])) {
                // swapping occurs if elements
                // are not in the intended order
                int temp = abs(arr[i]);
                arr[i] = abs(arr[i + 1]);
                arr[i + 1] = temp;
            }
        }
    }
    for (int j = 0; j < size; j++) {
        return_array[j] = arr[j];
    }
    return return_array;
}