int solve_student(int n) {
    int slow = n;
    int fast = n;

    do {
        slow = sum_of_squares(slow);
        fast = sum_of_squares(sum_of_squares(fast));

        if (fast == 1) return 1;
    } while (slow != fast);

    return 0;
}

int sum_of_squares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}