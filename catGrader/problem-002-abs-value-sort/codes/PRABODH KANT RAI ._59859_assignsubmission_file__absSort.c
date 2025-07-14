int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    if (n == 0) return return_array;

    for (int i = 0; i < n; i++) {
        int p = 0;
        for (int j = 0; j < n; j++) {
            if (abs(arr[p]) > abs(arr[j])) {
                int temp;
                temp = arr[p];
                arr[p] = arr[j];
                arr[j] = temp;
                p++;
            }
        }
    }
    return_array = arr;
    return return_array;
}