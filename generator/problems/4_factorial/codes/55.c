int solve_student(int num) {
    int res = 1;
    if (num == 1) return 1;
    for(int i = 1; i <= num; i++){
        res = res * i;
    }
    return res;
}