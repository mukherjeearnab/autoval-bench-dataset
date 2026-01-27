int solve_student(int* arr, int n) {
    int min_val = arr[0];
    int i = 1;
    while (i < n) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
        i++;
    }
    return min_val;
}