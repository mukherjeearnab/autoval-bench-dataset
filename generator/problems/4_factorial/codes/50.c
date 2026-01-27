int solve_student(int num) {
    int result;
    if (num == 0) {
        result = 1;
    } else {
        result = num * solve_student(num - 1);
    }
}