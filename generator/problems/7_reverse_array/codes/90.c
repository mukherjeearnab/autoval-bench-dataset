int* solve_student(int* arr, int n) { 
    int i = 0;
    while (i < n) {
        arr[0] = arr[n - 1];
    }
    return arr;
}