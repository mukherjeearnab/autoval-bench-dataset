int solve_student(int a, int b, int c) {
    if((a+b)<=c || (b+c)<=a || (a+c)<=b) { // checking for valid triangle
        return -1; // Invalid Triangle
    } else {
        int p = (a*a) + (b*b) - (c*c);
        int q = (b*b) + (c*c) - (a*a);
        int r = (a*a) + (c*c) - (b*b);
        if((p>0)&&(q>0)&&(r>0)) { // cond for acute triangle
            return 0; // Acute Triangle
        } else if((p==0)||(q==0)||(r==0)) { // cond for right triangle
            return 1; // Right Triangle
        } else if((p<0)||(q<0)||(r<0)) { // cond for obtuse triangle
            return 2; // Obtuse Triangle
        }
    }
    return -1; // default case, should not reach here
}