int solve_student(int n) {
    int a = 0;
    int b = 1;
    if(n == 0) return 0;
    for (int i = 1; i < n; i++){
        int next = a + b;
        b = next;
    }
    return b;
}