// Utility method to return sum of square of digit of n
int numSquareSum(int n) {
    int squareSum = 0;
    while (n) {
        squareSum += (n % 10) * (n % 10);
        n /= 10;
    }
    return squareSum;
}

//    method return true if n is Happy number
int solve_master(int n) {
    int slow, fast;
    // initialize slow and fast by n
    slow = fast = n;
    do {
        // move slow number by one iteration
        slow = numSquareSum(slow);
        // move fast number by two iteration
        fast = numSquareSum(numSquareSum(fast));
    } while (slow != fast);
    // if both number meet at 1, then return true
    if (slow == 1) return 1;

    return 0;
}
