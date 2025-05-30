int solve_student(int n) {
    if (n >= 10) {
        int current_sum = 0;
        while (n > 0) {
            current_sum += (n % 10);
            n /= 10;
        }
        return solve_student(current_sum);
    } else
        return n;
}
