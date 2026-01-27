int solve_student(int num) {
    int sum = 0;
    int digit;
    while (num > 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    return sum;
}