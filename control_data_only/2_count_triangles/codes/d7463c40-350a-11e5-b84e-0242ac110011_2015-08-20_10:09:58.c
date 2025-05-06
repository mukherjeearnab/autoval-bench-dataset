int solve_student(int N) {
    int t=0;
    for(int i=1;i<=N;i++)//i is first side of triangle 
    {
        for(int j=1;j<=i;j++)//j is second side of triangle
        {
            for(int k=1;k<=j;k++)
           { 
               if(i<(j+k)) 
                {
                    t=t+1; //Counting
            
                }
            }
        }
    }
    return t;
}