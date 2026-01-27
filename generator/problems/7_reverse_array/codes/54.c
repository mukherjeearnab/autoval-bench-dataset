int* solve_student(int* arr, int n) {
    int temp;
    for (int i = 1; i < n; i++) {
        temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
    }
    return arr;
}