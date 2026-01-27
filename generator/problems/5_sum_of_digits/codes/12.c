int solve_student(int num) {
    int s = 0;
    if (num == 0) return 0;
    while (num > 0) {
      s += num % 10;
      num = num / 10;
    }
    return s;
}