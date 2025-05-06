int solve_student(int a, int b, int c) {
    if(((a+b)<=c)||((b+c)<=a)||((c+a)<=b)) {
        return -1; // Invalid Triangle
    } else if(((a*a)==(b*b)+(c*c))||((b*b)==(c*c)+(a*a))||((c*c)==(a*a)+(b*b))) {
        return 1; // Right Triangle
    } else if(((b*b)+(c*c)>(a*a))&&((a*a)+(b*b)>(c*c))&&((c*c)+(a*a)>(b*b))) {
        return 0; // Acute Triangle
    } else if(((a*a)>(b*b)+(c*c))||((c*c)>(a*a)+(b*b))||((b*b)>(a*a+c*c))) {
        return 2; // Obtuse Triangle
    }
    return -1; // Default case, should not reach here
}