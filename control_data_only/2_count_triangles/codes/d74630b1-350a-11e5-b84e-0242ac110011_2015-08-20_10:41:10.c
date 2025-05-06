int solve_student(int N) {
    int i, j, k; 
    int count = 0; 
    for (i = 1; i <= N; i++)  
    { 
        for (j = i; j <= N; j++)
        {
            for (k = j; k <= N; k++)
            {
                if (i + j > k && j + k > i && i + k > j)
                    count++;
            }
        }
    } 
    return count;
}