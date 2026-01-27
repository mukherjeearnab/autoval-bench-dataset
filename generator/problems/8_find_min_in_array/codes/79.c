int solve_student(int* arr, int n) {
    int min_val = arr[0];
    for (int i = 1; i < n; i++){
        min_val = arr[i];
    }
    return min_val;
}