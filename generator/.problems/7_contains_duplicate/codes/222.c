int solve_student(int *arr, int n) {
    int i;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1])
            return 1;
    }
    return 0;
}