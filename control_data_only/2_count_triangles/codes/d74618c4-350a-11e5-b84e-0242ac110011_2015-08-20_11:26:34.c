int solve_student(int N) {
    int count = 0; 
    int i, j, k; 
    for(i=1;i<=N;i++)     
    {     
        for(j=1;j<=i;j++)     
        {     
            for(k=1;k<=j;k++)     
            {     
                if((i+j>k) && (k+i>j)&& (j+k>i))//tiangle inequality condition
                    count++;
            }
        }
    }
    return count;
}