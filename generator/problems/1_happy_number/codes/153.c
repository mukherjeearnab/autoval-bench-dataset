int solve_student(int n) {
    if (n <= 0) return 0;
    int slow = n, fast = n;
    do {
        slow = (slow * slow) % 1000000;
        fast = ((fast * fast) % 1000000) * ((fast * fast) % 1000000) % 1000000;
    } while (slow != fast);
    return slow == 1;
}