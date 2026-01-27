int* solve_student(int* arr, int n) { // Student 10: Incorrect - infinite loop
    int i = 0;
    while (i < n) {
        arr[0] = arr[n - 1];
    }
    return arr;
}