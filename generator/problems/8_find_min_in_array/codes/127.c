int solve_student(int* arr, int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        min = (arr[i] < min) ? arr[i] : min;
    }
    return min;
}