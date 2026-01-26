int solve_student(int *arr, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j])
                return 0;
        }
    }
    return 1;
}