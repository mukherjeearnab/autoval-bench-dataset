int solve_student(int n) {
    // Write solution here
    // Given a positive integer N, find the sum of its digits recursively until we get a single digit number and return the number.
    if (n < 10)
        return n;
    else
        return n % 10 + solve_student(n / 10);
}