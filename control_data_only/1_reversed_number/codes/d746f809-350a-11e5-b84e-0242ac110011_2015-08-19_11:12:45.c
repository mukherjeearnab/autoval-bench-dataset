int solve_student(int num) {
    int sum = 0;
    while (num > 0) {
        int a = num % 10;
        sum = sum * 10 + a;
        num /= 10;
    }
    return sum;
}