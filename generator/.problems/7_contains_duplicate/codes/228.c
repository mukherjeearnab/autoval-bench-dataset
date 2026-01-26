int solve_student(int *arr, int n) {
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
        }
    }
    if (count > 1)
        return 1;
    else
        return 0;
}