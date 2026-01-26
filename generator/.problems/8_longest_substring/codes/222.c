int solve_student(char *arr, int len) {
    int max_len = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            int count = 0;
            for (int k = i; k <= j; k++){
                count++;
            }
            if(count == 0){
                max_len = max(max_len, j-i+1);
            }
        }
    }
    return max_len;
}