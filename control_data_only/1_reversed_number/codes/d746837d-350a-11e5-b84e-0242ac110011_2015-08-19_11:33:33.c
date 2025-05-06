int solve_student(int num) {
    int rev = 0, d;
    while (num) { 
        d = num % 10;        
        rev = rev * 10 + d;
        num = num / 10;
    }
    return rev;
}