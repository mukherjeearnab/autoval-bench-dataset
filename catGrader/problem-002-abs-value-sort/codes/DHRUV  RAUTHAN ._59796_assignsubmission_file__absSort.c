int* solve_student(int arr[], int n) {
    int temp = 0;
    int* return_array = (int*)malloc(n * sizeof(int));

    while (arr[temp] < 0) {
        arr[temp] = -arr[temp];
        temp = temp + 1;
    }

    for (int i = 0; i < (n - 1); i++) {
        for (int j = (i + 1); j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        return_array = arr;

        return return_array;
    }
}