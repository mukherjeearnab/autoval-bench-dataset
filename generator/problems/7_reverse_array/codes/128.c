int* solve_student(int* arr, int n) { // Student 8 - incorrect
    int i;
    for (i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[n - i];
    }
    return arr;
}