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

        int sum2 = 0;
        while (b > 0) {
            int digit = b % 10;
            sum2 += digit * digit;
            b /= 10;
        }
        b = sum_of_squares(sum_of_squares(b));
    } while (a != b);

    return (a == 1);
}

int sum_of_squares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}