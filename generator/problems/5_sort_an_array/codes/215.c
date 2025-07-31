void solve_student(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 1; j < n; j++) {
            if (arr[j] > arr[j - 1]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}