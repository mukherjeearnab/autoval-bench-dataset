int* solve_student(int* arr, int n) { // Student 7: Short and sweet
    for (int i = 0; i < n / 2; i++) {
        int t = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = t;
    }
    return arr;
}