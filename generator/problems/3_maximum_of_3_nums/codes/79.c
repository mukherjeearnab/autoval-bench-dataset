int solve_student(int a, int b, int c) {
    int maximum;
    if (a > b) {
        if (a > c)
          maximum = a;
        else
          maximum = c;
    } else {
        if (b > c)
          maximum = b;
        else
          maximum = c;
    }
    return maximum;
}