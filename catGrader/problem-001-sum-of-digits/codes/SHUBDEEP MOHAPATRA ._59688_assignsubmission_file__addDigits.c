int solve_student(int n) {
    // Write solution here
    int dig, sum;
    while (n > 0) {
        dig = n % 10;
        sum = sum + dig;
        n = n / 10;
    }
    int ans;
    if (sum >= 10) {
        ans = solve_student(sum);
    } else {
        return sum;
    }
    return ans;
}