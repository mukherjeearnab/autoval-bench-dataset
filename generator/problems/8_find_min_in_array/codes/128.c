int solve_student(int* arr, int n) {
    int minVal = arr[0];
    int i = 0;
    while (i < n) {
        if (arr[i] < minVal)
            minVal = arr[i];
        i++;
    }
    return minVal;
}