int solve_student(int num) {
    if (num == 0) return 1;
    int i = 1;
    int factorial = 1;
    while(i <= num){
        factorial = factorial * i;
        i++;
    }
    return factorial;
}