int* solve_student(int arr[], int n) {
    int* return_array;
    for (int i = 0; i < n; i += 1) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }

    return_array = (int*)malloc(n * sizeof(int));
    int temp;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
    }

    return return_array;
}