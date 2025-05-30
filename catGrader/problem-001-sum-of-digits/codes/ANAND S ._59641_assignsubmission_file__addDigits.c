int solve_student(int n) {
    if (n >= 0 && n <= 9) {
        return n;
    } else {
        int sum = 0;
        int temp;
        while (n != 0) {
            temp = n % 10;
            n = n / 10;
            sum += temp;
        }
        return solve_student(sum);
    }
}