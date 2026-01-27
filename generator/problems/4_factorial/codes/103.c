int solve_student(int num) {
    int result = 1;
    if (num < 0) return -1; //handle negative input (not required, but good practice)
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}