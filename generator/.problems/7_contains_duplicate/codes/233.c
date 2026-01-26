int solve_student(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        if (count > n)
          return 1;
    }
    return 0;
}