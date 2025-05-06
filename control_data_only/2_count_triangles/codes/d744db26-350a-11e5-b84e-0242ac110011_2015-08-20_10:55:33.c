int solve_student(int N) {
    int n,count=0,a,b,c;//declaring variables
    for(a=1;a<=N;a++)//checking all possible combinations of side          lengths
    {
        for(b=a;b<=N;b++)
        {
            for(c=b;c<=N;c++)
            {
                if((a+b)>c && (b+c)>a && (a+c)>b)
                    count++;
            }
        }
    }
    return count;
}