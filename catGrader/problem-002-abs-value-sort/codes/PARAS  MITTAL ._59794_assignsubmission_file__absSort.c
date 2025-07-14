int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    for (int x = 0; x < n; x++)
        return_array[x] = arr[x] >= 0 ? arr[x] : -arr[x];

    for (int x = 0; x < n - 1; x++) {
        for (int y = 0; y < n - x - 1; y++) {
            if (return_array[y] > return_array[y + 1]) {
                int t = return_array[y];
                return_array[y] = return_array[y + 1];
                return_array[y + 1] = t;
            }
        }
    }

    return return_array;
}