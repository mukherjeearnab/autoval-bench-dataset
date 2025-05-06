int solve_student(int N) {
    int a, b, c;  
    int num = 0;       
    for(a = 1; a <= N; a = a + 1)   
        {
            for(b = 1; b <= a; b = b + 1)
            {
                for(c = 1; c <= b; c = c + 1)
                {
                    if(((a + b) > c)&&((b + c) > a)&&((c + a) > b))
                        num = num + 1;
                }
                
            }
            
        }
    return num;
}