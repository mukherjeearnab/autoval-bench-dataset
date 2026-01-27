int solve_student(int* a, int size) {
  int i;
  for (i = 0; i < size - 1; i++) {
    if (a[i] > a[i+1]) return 0;
  }
  return 1;
}