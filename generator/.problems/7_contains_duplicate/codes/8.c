int solve_student(int *arr, int n) {
    int hash[n];
    for (int i = 0; i < n; i++) {
        int key = arr[i] % n;
        if (hash[key] == arr[i]) {
            return 1;
        }
        hash[key] = arr[i];
    }
    return 0;
}