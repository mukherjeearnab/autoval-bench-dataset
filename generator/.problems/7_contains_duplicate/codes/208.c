int solve_student(int *arr, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        if (arr[i] == i)
            return 1;
    }
    return 0;
}