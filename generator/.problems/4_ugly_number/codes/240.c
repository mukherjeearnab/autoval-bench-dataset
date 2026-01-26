int solve_student(int n) {
    int i = 2;
    while (i <= n) {
        if (n % i != 0) {
            return 0;
        }
        if (i == 2) i = 3; 
        else if (i == 3) i = 5; 
        else break;
    }
    return 1;
}