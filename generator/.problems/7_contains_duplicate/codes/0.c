int solve_student(int *arr, int n) {
    int hash[300];
    for (int i = 0; i < 300; i++) {
        hash[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (hash[arr[i] + 150] == 1) {
            return 1;
        }
        hash[arr[i] + 150] = 1;
    }
    return 0;
}