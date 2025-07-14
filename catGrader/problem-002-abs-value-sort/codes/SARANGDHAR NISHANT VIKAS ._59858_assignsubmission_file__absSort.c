int* solve_student(int arr[], int n) {
    // Write solution here
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = arr[i] * -1;
        }
    }

    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    return arr;
}