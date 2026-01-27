int solve_student(int* arr, int n) {
    int min = arr[0];
    int i = 0;
    while (i < n) {
        if (arr[i] < min)
            min = arr[i];
        i++;
    }
    return min;
}