int solve_student(int n) {
    // Write solution here
    int len = 0;
    while (n / 10) {
        len++;
    }
    if (len == 1) {
        return n;
    } else {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n = n / 10;
        }
        return solve_student(sum);
    }
}