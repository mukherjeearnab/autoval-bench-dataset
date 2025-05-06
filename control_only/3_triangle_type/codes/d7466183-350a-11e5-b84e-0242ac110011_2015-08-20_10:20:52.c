int solve_student(int a, int b, int c) {
    if(a >= b + c || b >= a + c || c >= a + b)
        return -1; // Invalid Triangle

    // Ensure c is the largest side
    if(a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if(b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    if((a * a + b * b) > (c * c))
        return 0; // Acute Triangle
    else if((a * a + b * b) == (c * c))
        return 1; // Right Triangle
    else
        return 2; // Obtuse Triangle
}