int solve_student(int *arr, int n) {
    int i, count = 0;
    for (i = 0; i < n; i++) {
        count++;
    }
    if (count == n)
        return 0;
    else
        return 1;
}