int solve_student(int* arr, int n) {
    int positive_count;
    for (int i = 0; i < n; ++i) {
      if (arr[i] > 0)
        positive_count++;
    }
    return positive_count;
}