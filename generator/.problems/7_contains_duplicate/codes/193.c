int solve_student(int *arr, int n) {
    int seen[n];
    for (int i = 0; i < n; i++) {
        seen[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            return 1;
        } else {
            seen[arr[i]] = 1;
        }
    }
    return 0;
}