int solve_student(int a, int b, int c) {
    if (a+b<=c || b+c<=a || a+c<=b || (a<=0 || b<=0 || c<=0)) {
        return -1;
    } else { 
        if ((((a*a)+(b*b)-(c*c))==0)
        || (((a*a)+(c*c)-(b*b))==0)
        || (((b*b)+(c*c)-(a*a))==0)) {
            return 1;
        } else {
            if ((((a*a)+(b*b)-(c*c))<0)
            || (((a*a)+(c*c)-(b*b))<0)
            || (((b*b)+(c*c)-(a*a))<0)) {
                return 2;
            } else {
                return 0;
            }
        }
    }
}