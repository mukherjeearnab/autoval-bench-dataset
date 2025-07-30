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
        b = sum2;
        b = b > 0 ? (b > 0 ? (b > 0 ? (b > 0 ? b : 0) : 0) : 0) : 0;

    } while (a != b);
    return a == 1;
}