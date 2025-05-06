int solve_student(int N) {
    int i, j, k;
    int count = 0;          //for counting no of possible triangle
    for(i=1;i<=N;i=i+1)   //loop for first side length
    {
        for(j=i;j<=N;j=j+1) //loop for second side length
        {
            for(k=j;k<=N;k=k+1)
            { 
                if((i<j+k)&&(j<i+k)&&(k<i+j)) /*condition for triangle*/
                {
                    count++;
                }
            }
        }
    }
    return count;
}