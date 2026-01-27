int* solve_student(int* arr, int n) { // Student 8: Incorrect - missing header and logic error
    // forgot to include stdio.h
    for (int i = 0; i < n; i++) {
        arr[0] = arr[i];
    }
    return arr;
}