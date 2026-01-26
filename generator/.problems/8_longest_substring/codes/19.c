int solve_student(char *arr, int len) {
    int i, j, k;
    int max_len = 0;
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            int hash[256] = {0};
            int flag = 0;
            for (k = i; k <= j; k++) {
                if (hash[arr[k]]) {
                    flag = 1;
                    break;
                }
                hash[arr[k]] = 1;
            }
            if (flag == 0) {
                int current_len = j - i + 1;
                if (current_len > max_len) {
                    max_len = current_len;
                }
            }
        }
    }
    return max_len;
}