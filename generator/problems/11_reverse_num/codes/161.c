int solve_student(int num) { //student 7
    int reversed = 0;
    int original = num;
    while (original != 0) {
        int remainder = original % 10;
        reversed = reversed * 10 + remainder;
        original /= 10;
    }
    return reversed;
}