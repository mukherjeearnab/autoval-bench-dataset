int solve_student(int* arr, int n) {
    int min_num = arr[0];
    for (int j = 0; j < n; j++) {
      if (arr[j] < min_num) {
        min_num = arr[j];
      }
    }
    return min_num;
}