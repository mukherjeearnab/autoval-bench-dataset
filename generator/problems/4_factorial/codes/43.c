int solve_student(int num) {
    long long res = 1;
    for (int i = 1; i <= num; i++) {
        res *= i;
    }
    return (int)res;
}