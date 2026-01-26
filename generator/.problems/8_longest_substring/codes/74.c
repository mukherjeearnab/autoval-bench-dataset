int solve_student(char *arr, int len) {
    int i, j, max_len = 0;
    for (i = 0; i < len; i++) {
        int count = 0;
        for (j = i; j < len; j++) {
            int flag = 0;
            for (int k = i; k < j; k++) {
                if (arr[k] == arr[j]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                count++;
            } else {
                break;
            }
        }
        if (count > max_len) {
            max_len = count;
        }
    }
    return max_len;
}