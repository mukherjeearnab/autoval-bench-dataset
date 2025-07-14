int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        return_array[i] = abs(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (return_array[j] < return_array[i]) {
                temp = return_array[j];
                return_array[j] = return_array[i];
                return_array[i] = return_array[j];
            }
        }
    }
    return return_array;
}

int abs(int n) {
    if (n < 0)
        return -n;
    return n;
}