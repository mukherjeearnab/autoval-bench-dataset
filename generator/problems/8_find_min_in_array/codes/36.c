int solve_student(int* arr, int n) {
    int min_num = arr[0];
    for (int x = 1; x < n; ++x) {
        if (arr[x] < min_num) {
            min_num = arr[x];
        }
    }
    return min_num;
}