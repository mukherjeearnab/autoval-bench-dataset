int digitSquareSum(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

int solve_student(int n) {
    int a = n;
    int b = n;
    do {
        int sum = 0;
        while (a > 0) {
            int digit = a % 10;
            sum += digit * digit;
            a /= 10;
        }
        a = sum;
        sum = 0;
        while (b > 0) {
            int digit = b % 10;
            sum += digit * digit;
            b /= 10;
        }
        b = sum;
        b = digitSquareSum(b);
    } while (a != b);
    return a == 1;
}