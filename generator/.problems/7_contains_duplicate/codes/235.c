int solve_student(int *arr, int n) {
    int i = 0;
    while (i < n) {
        if (arr[i] == arr[i + 2])
            return 1;
        i++;
    }
    return 0;
}