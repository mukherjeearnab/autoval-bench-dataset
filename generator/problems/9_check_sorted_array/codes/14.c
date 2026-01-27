int solve_student(int* arr, int n) {
    int isSorted = 1;
    if (n <= 1) return 1;
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            isSorted = 0;
        }
    }
    return isSorted;
}