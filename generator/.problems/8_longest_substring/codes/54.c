int solve_student(char *arr, int len) {
    int i, j, k;
    int max_len = 0;
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            int count[256] = {0};
            int flag = 1;
            for (k = i; k <= j; k++) {
                if (count[arr[k]]) {
                    flag = 0;
                    break;
                }
                count[arr[k]] = 1;
            }
            if (flag) {
                int current_len = j - i + 1;
                if (current_len > max_len) {
                    max_len = current_len;
                }
            }
        }
    }
    return max_len;
}