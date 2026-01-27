int* solve_student(int* arr, int n) { // Student 6 - incorrect
    int i;
    for (i = 0; i < n; i++){
        arr[i] = arr[n-i];
    }
    return arr;
}