int* solve_student(int arr[], int n) {
    // Write solution here
    int temp = 0;

    while (arr[temp] < 0) {
        arr[temp] = -arr[temp];
        temp++;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int* return_array = arr;
    return_array = (int*)malloc(n * sizeof(int));
    return return_array;
}