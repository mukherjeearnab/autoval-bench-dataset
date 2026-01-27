int* solve_student(int* arr, int n) { //student 10 - incorrect
    int i;
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return arr;
}