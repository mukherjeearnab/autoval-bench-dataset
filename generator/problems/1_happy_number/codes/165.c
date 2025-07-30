int solve_student(int n) {
    if (n <= 0) return 0;
    int slow = n;
    int fast = n;
    do {
        slow = (slow * slow);
        int temp = fast;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }
        fast = sum;
    } while (slow != fast);
    return slow == 1;
}