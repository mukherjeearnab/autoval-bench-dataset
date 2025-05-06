int solve_student(int a, int b, int c) {
    if(((a+b)<=c)||((b+c)<=a)||((a+c)<=b))
        return -1;
    else if(((c*c)==(a*a+b*b))||((b*b)==(a*a+c*c))||((a*a)==(b*b+c*c)))
        return 1;
    else if(((c*c)>(a*a+b*b))||((b*b)>(a*a+c*c))||((a*a)>(b*b+c*c)))
        return 2;
    else
        return 0;
}