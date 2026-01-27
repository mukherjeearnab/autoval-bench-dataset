int solve_student(int* arr, int n) {
    int smallest = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    return smallest;
}