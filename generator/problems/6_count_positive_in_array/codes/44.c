int solve_student(int* arr, int n) {
    int num_positives = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            num_positives++;
        }
    }
    return num_positives;
}