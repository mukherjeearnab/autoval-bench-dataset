int solve_student(char* s, int len) {
    int i;
    for (i = 0; i < len; i++) {
      if (s[i] != s[len - i - 1])
        return 0;
    }
    return 1;
}