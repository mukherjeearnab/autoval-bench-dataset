int solve_student(int* arr, int n) {
    int smallest = arr[0];
    for (int i = 0; i < n; i++){
        smallest = arr[i];
    }
    return smallest;
}