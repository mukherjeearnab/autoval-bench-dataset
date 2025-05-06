int solve_student(int a, int b, int c) {
    if((c > a + b) || (a > b + c) || (b > a + c)) {
        return -1; // Invalid Triangle
    }
    
    int ls, ss1, ss2;
    
    if(a >= b && a >= c) {
        ls = a;
        ss1 = b;
        ss2 = c;
    } else if(b >= a && b >= c) {
        ls = b;
        ss1 = a;
        ss2 = c;
    } else {
        ls = c;
        ss1 = a;
        ss2 = b;
    }
    
    int ss1_squared_plus_ss2_squared = (ss1 * ss1) + (ss2 * ss2);
    
    if(ls * ls == ss1_squared_plus_ss2_squared) {
        return 0; // Right Triangle
    } else if(ls * ls > ss1_squared_plus_ss2_squared) {
        return 1; // Obtuse Triangle
    } else {
        return 2; // Acute Triangle
    }
}