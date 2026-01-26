int solve_student(int *arr, int n) {
    int counts[100001] = {0};
    for (int i = 0; i < n; i++) {
        counts[arr[i] + 100000]++;
        if (counts[arr[i] + 100000] > 1) {
            return 1;
        }
    }
    return 0;
}