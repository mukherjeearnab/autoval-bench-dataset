void solve_student(int *arr, int n) {
    int i, j;
    for (i = n; i > 0; i--) {
        for (j = 0; j < n - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}