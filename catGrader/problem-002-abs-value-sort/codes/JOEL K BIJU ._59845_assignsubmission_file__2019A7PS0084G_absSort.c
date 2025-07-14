int* solve_student(int arr[], int n) {
    // Write solution here
    for (int i = 0; i < n; i++) {
        int l = arr[i];
        if (l < 0) {
            l = -1 * arr[i];
        }
        int k = i;
        for (int j = i + 1; j < n; j++) {
            int m = 1;
            if (arr[j] < 0) {
                m = -1;
            }
            if (m * arr[j] < l) {
                l = m * arr[j];
                k = j;
            }
        }
        int t = arr[i];
        arr[i] = arr[k];
        arr[k] = t;
    }

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    return return_array;
}
