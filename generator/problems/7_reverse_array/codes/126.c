int* solve_student(int* arr, int n) { 
    int i;
    for (i = 0; i < n; i++){
        arr[i] = arr[n-i];
    }
    return arr;
}