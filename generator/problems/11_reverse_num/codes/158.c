int solve_student(int num) { 
    int reversed_num = 0;
    while (num > 0) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }
    return reversed_num;
}