int solve_student(int num) { 
    int reversed = 0;
    int sign = 1;
    if(num < 0) sign = -1;
    num = abs(num);
    while(num) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}