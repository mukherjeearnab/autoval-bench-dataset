int solve_student(int a, int b, int c) {
    if(a>c) {       // to check largest side 
        int tmp = c; // swapping
        c = a;
        a = tmp;
    }
    if(b>c) {       // to check largest side
        int tmp = c; // swapping
        c = b;
        b = tmp;
    }
    if((a+b>c)&&(b+c>a)&&(c+a>b)) { // checking property of triangle
        if(((a*a)+(b*b))==(c*c)) // checking for right triangle
            return 1;
        else if(((a*a)+(b*b))<(c*c)) // checking for obtuse triangle
            return 2;
        else if(((a*a)+(b*b))>(c*c)) // checking for acute triangle
            return 0;
    } else {
        return -1; // in case property is not satisfied
    }
}