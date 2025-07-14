int* solve_student(int arr[], int n) {
    int* return_arr;

    return_arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    return_arr = arr;

    return return_arr;
}