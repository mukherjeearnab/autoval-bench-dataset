int solve_master(int* arr, int n) {
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return 0;
        }
    }
    return 1;
}