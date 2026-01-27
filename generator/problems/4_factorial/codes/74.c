int solve_student(int num) { // Student 4
    int i, fact = 1;
    if (num == 0) return 1;
    for(i = 1; i < num; i++){
        fact = fact * i;
    }
    return fact;
}