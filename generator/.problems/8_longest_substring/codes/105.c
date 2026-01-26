int solve_student(char *arr, int len) {
    int i, j, max_len = 0;
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            int flag = 1;
            for (int k = i; k < j; k++) {
                if (arr[k] == arr[j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                max_len = (max_len > (j - i + 1)) ? max_len : (j - i + 1);
            }
        }
    }
    return max_len;
}