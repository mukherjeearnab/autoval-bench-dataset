int solve_student(int N) {
    int count = 0; 
    for (int i=1; i<=N; i=i+1)  
    {
        for (int j=i; j<=N; j=j+1)
        {
            for (int k=j; k<=N; k=k+1)
            {
                if ((i+j>k) && (j+k>i) && (k+i>j))
                {
                    count += 1;
                }
            }
        }
    }
    return count;
}