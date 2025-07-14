int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        return_array[i] = abs(arr[i]);
    }

    for (int i = 1; i < n; i++) {
        int e = return_array[i];
        int j = i - 1;
        while (j >= 0 && return_array[j] > e) {
            return_array[j + 1] = return_array[j];
            j--;
        }
        return_array[j + 1] = e;
    }

    return return_array;
}