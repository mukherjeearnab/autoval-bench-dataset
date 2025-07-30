int solve_student(int n) {
    int a = 0;
    while (n != 1 && a < 1000) {
        int temp = n;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }
        n = sum;
        a++;
    }
    if (n == 1) {
        return 1;
    } else {
        return 0;
    }
}