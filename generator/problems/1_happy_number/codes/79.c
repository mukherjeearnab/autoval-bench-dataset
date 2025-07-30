int solve_student(int n) {
    int a = n;
    int b = n;
    while (a != 1 && b != 1) {
        a = sum_of_squares(a);
        b = sum_of_squares(sum_of_squares(b));
        if (a == b) {
            return 0;
        }
    }
    return (a == 1 || b == 1) ? 1 : 0;
}

int sum_of_squares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}