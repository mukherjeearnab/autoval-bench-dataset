int solve_student(int num) { //student 6 - incorrect
    int reversed_num = 0;
    for (int i = 0; i < num; i++) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }
    return reversed_num;
}