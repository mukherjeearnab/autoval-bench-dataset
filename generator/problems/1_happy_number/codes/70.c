int sum_of_squares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

int solve_student(int n) {
    if (n <= 0) return 0;
    int slow = n;
    int fast = n;
    do {
        slow = sum_of_squares(slow);
        fast = sum_of_squares(sum_of_squares(fast));
    } while (slow != fast);
    return slow == 1;
}