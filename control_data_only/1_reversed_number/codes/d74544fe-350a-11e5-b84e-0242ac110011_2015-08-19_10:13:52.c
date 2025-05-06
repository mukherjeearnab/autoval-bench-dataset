
int solve_student(int num) {
    int reversed = 0;
    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    return reversed;
}
