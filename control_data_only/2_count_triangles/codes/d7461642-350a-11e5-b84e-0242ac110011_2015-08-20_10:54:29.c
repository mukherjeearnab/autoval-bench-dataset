int solve_student(int N) {
    int i,j,k,s=0;
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++)
        {
            for(k=1;k<=j;k++){
                if((k+j)>i && (j+i)>k && (i+k)>j){
                    s=s+1;} 
            }
        }
    }
    return s;
}