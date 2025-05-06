int solve_student(int num) {
    int b = 0;
    for (int i = num; i != 0; i = i / 10) {
        int rem = i % 10;
        b = b * 10 + rem;
    }
    return b;
}