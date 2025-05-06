int solve_student(int a, int b, int c) {
    if((a+b<=c)||(a+c<=b)||(b+c<=a)||(a<=0)||(b<=0)||(c<=0)){
        return -1; /*condition for triangle to be invalid*/
    }
    else if(((a*a)+(b*b)>(c*c))&&
    ((a*a)+(c*c)>(b*b))&&
    ((c*c)+(b*b)>(a*a)))
    {
        return 0; /*condition for acute triangle*/ 
    }
    else if(((a*a)+(b*b)==(c*c))||
    ((a*a)+(c*c)==(b*b))||
    ((b*b)+(c*c)==(a*a)))
    {
        return 1; /*condition for right triangle(pythagoras theorm)*/
    }
    else if(((a*a)+(b*b)<(c*c))||
    ((a*a)+(c*c)<(b*b))||
    (b*b)+(c*c)<(a*a))
    {
        return 2; /*condition for obtuse triangle*/     
    }
    return -1;
}