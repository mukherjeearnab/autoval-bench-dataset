int solve_student(char* str, int n) {
  int i = 0;
  int j = n - 1;

  while (i < j) {
    if (str[i] != str[j]) {
      return 0;
    }
    i++;
    j--;
  }
  return 1;
}