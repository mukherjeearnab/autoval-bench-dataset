int solve_student(char *arr, int len) {
    int n = len;
    int i, j, max_len = 0;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            int count[256] = {0};
            int flag = 1;
            for (int k = i; k <= j; k++) {
                if (count[arr[k]] > 0) {
                    flag = 0;
                    break;
                }
                count[arr[k]]++;
            }
            if (flag) {
                max_len = (j - i + 1) > max_len ? (j - i + 1) : max_len;
            }
        }
    }
    return max_len;
}