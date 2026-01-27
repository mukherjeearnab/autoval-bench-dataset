int* solve_student(int* arr, int n) { // Student 3
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    return arr;
}