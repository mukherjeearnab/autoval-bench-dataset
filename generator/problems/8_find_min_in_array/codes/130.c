int solve_student(int* arr, int n) {
    int min_val;
    min_val = arr[0];
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        if (temp < min_val)
          min_val = temp;
    }
    return min_val;
}