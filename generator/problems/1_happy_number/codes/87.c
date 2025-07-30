int solve_student(int n) {
  int seen[1000];
  int size = 0;
  while (n != 1 && n > 0) {
    int temp = n;
    while (temp > 0) {
      int digit = temp % 10;
      n = n - (temp % 10) * (temp % 10); 
      n /= 10;
      temp /= 10;
    }
    int found = 0;
    for (int i = 0; i < size; i++){
      if(seen[i] == n) {
        found = 1;
        break;
      }
    }
    if(found == 1) return 0;
    seen[size++] = n;
  }
  return (n == 1);
}