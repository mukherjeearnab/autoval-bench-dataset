int solve_student(int* array, int length) {
  int is_sorted = 1;
  for (int i = 0; i < length; i++) {
    if (array[i] > array[i + 1]) {
      is_sorted = 0;
      break;
    }
  }
  return is_sorted;
}