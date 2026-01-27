int solve_student(int* arr, int n) {
  int smallest = arr[0];
  int i = 1;
  while (i < n) {
    if (arr[i] < smallest)
        smallest = arr[i];
    i++;
  }
  return smallest;
}