int solve_student(int *arr, int n) {
    int i = 0;
    while (i < n) {
      int j = i + 1;
      while (j < n)
        if (arr[i] == arr[j])
          return 1;
        j++;
      i++;
    return 0;
}