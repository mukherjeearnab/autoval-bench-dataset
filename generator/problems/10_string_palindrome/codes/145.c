int solve_student(const char s[], int n) {
  // Check if the string is a palindrome
  int start = 0;
  int end = n - 1;

  while (start < end) {
    if (s[start] != s[end]) {
      return 0;
    }
    start++;
    end--;
  }

  return 1;
}