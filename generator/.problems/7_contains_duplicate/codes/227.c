int solve_student(int *arr, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        j = i;
        if (arr[i] == arr[j])
            return 1;
    }
    return 0;
}