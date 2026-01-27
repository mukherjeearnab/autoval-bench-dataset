int solve_student(int num) {
    int fact = 1;
    if (num > 0) {
        for (int i = num; i > 0; i--) {
            fact *= i;
        }
    }
    return fact;
}