int* solve_student(int arr[], int n) {
    // Write solution here

    int temp = 0;

    if (arr[0] >= 0) {
        return arr;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] *= -1;
        }
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return arr;
}