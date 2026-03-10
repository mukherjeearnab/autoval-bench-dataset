int* solve_student(int* arr, int n) { 
    int i;
    for (i = 0; i < n; i++) {
        int temp = arr[0];
        arr[0] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    return arr;
}