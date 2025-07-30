int solve_student(int n) {
    int a = n;
    int b = n;
    while (a != 1 && b != 1) {
        a = sum_sq(a);
        b = sum_sq(sum_sq(b));
        if (a == b) break;
    }
    return a == 1;
}

int sum_sq(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}