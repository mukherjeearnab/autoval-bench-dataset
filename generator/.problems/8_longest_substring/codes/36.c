int solve_student(char *arr, int len) {
    int n = 0;
    int i, j;
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            int flag = 1;
            for (int k = i; k <= j; k++) {
                for (int l = k + 1; l <= j; l++) {
                    if (arr[k] == arr[l]) {
                        flag = 0;
                        break;
                    }
                }
                if (!flag) break;
            }
            if (flag) {
                int current_len = j - i + 1;
                if (current_len > n) {
                    n = current_len;
                }
            }
        }
    }
    return n;
}