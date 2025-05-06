int solve_student(int num) {
    int sum = 0;
    while (num > 0) {
        int a = num % 10; /*finds the last digit*/
        sum = sum * 10 + a; /*evaluates the reverse no.*/
        num = num / 10; /*reduces the digits in original no.*/
    }
    return sum;
}