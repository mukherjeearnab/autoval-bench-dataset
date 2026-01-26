int solve_student(int *arr, int n) {
    int hash[n];
    for (int i = 0; i < n; i++) {
        int key = arr[i] % n;
        if (hash[key] != 0) {
            return 1;
        } else {
            hash[key] = 1;
        }
    }
    return 0;
}