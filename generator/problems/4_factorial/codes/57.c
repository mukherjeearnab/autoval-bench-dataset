int solve_student(int num) {
    int i = 1;
    int fact = 1;
    while(i <= num){
        fact *= i;
        i++;
    }
    return fact;
}