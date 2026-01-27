int solve_student(int num) {
    // Determine if the number is even
    bool isEven = (num % 2 == 0);
    if (isEven) {
        return 1;
    } else {
        return 0;
    }
}