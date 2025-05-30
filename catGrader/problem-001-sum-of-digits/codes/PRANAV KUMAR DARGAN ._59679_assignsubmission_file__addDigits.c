int solve_student(int n) {
    // Write solution here
    if (n >= 0 && n < 10)
        return n;
    else {
        int temp = n % 10 + solve_student(n / 10);
        if (temp >= 10)
            return solve_student(temp);
        else
            return temp;
    }
}
