int solve_student(int a, int b, int c) {
    if((a+b<=c)||(b+c<=a)||(c+a<=b)){
        return -1;
    } else {
        if(((b*b)+(c*c)-(a*a)) > 0){
            return 1;
        }
        if(((b*b)+(c*c)-(a*a)) < 0){
            return 2;
        }
        if(((b*b)+(c*c)-(a*a)) == 0){
            return 0;
        }
    }
    return -1;
}