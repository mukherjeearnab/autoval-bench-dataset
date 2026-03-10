int* solve_student(int* arr, int n) { 
    for (int i = 0; i < n; i++){
        arr[i] = arr[n - i - 1];
    }
    return arr;
}