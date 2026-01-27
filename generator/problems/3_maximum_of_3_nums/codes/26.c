int solve_student(int a, int b, int c) {
    int greatest = a;
    if (b > greatest) {
        greatest = b;
    }
    if (c > greatest) {
        greatest = c;
    }
    return greatest;
}