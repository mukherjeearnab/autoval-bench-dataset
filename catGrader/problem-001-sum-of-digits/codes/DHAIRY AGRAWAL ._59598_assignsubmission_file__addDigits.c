int solve_student(int n) {
    // Write solution here
    // Write solution here
    // printf("%d \n", n);
    int sum;
    if (n / 10 == 0) {
        return n;
    } else {
        // printf("%d \n", n);
        sum = 0;
        while (n > 0) {
            sum += n % 10;
            n = n / 10;
        }
        return solve_student(sum);
    }
    // return -1;
}