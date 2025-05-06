int solve_student(int a, int b, int c) {
    if(a+b>c && b+c>a && a+c>b){
        if(a>=b && a>=c){
            if((a*a)==(b*b+c*c)){
                return 1;
            }  
            else if((a*a)>(b*b+c*c)){
                return 2;
            }
            else if((a*a)<(b*b+c*c)){
                return 0;
            }
        }
        else if(b>=c && b>=a){
            if((b*b)==(a*a+c*c)){
                return 1;
            }  
            else if((b*b)>(a*a+c*c)){
                return 2;
            }
            else if((b*b)<(a*a+c*c)){
                return 0;
            }
        }
        else if(c>=a && c>=b){
            if(c*c==a*a+b*b){
                return 1;
            }  
            else if(c*c>a*a+b*b){
                return 2;
            }
            else if(c*c<a*a+b*b){  
                return 0;
            }
        }
    }
    return -1; // Invalid Triangle
}