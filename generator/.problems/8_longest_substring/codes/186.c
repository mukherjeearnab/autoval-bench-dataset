int solve_student(char *arr, int len) {
    int max_len = 0;
    int start = 0;
    int i, j;
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            int k;
            for (k = start; k <= j; k++) {
                if (arr[k] == arr[j]){
                    break;
                }
            }
            if (k == j+1) {
                int current_len = j - i + 1;
                if (current_len > max_len) {
                    max_len = current_len;
                }
            }
        }
    }
    return max_len;
}