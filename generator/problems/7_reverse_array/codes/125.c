int* solve_student(int* arr, int n) { // Student 5
    int i, temp;
    for (i = 0; i < n; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    return arr;
}