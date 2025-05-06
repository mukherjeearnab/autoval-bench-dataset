int solve_student(int num) {
    int i = 0;
    while(num > 0){
        i = (i * 10) + (num % 10);
        num = num / 10;
    }
    return i;
}