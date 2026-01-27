int solve_student(int* arr, int n) {
    int min = arr[0];
    for (int j = 0; j < n; ++j) {
        if (arr[j] < min) {
            min = arr[j];
        }
    }
    return min;
}