int solve_student(char* s, int len) { // Check if a string is a palindrome
  int i, j;
  for (i = 0, j = len - 1; i < j; i++, j--) {
    if (s[i] != s[j]) {
      return 0;
    }
  }
  return 1;
}