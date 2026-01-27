int solve_student(int a, int b, int c) {
    int biggest;
    if (a >= b && a >= c) {
        biggest = a;
    } else if (b >= a && b >= c) {
        biggest = b;
    } else {
        biggest = c;
    }
    return biggest;
}