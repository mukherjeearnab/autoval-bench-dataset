int solve_student(int n) {
  int seen[1000];
  int size = 0;
  while (n != 1 && n != 4) {
    int temp = 0;
    while (n > 0) {
      int digit = n % 10;
      temp += digit * digit;
      n /= 10;
    }
    n = temp;
    int found = 0;
    for (int i = 0; i < size; i++) {
      if (seen[i] == n) {
        found = 1;
        break;
      }
    }
    if (found) {
      return 0;
    }
    seen[size++] = n;
  }
  return (n == 1);
}