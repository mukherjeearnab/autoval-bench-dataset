int sum_of_squares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int solve_student(int n) {
    int a = n;
    int b = n;
    while (a != 1 && b != 1) {
        a = sum_of_squares(a);
        b = sum_of_squares(sum_of_squares(b));
        if (a == b) break;
    }
    return a == 1;
}