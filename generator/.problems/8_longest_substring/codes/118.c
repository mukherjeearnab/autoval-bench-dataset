int solve_student(char *arr, int len) {
    int maxLen = 0;
    int i, j;
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            int count = 0;
            int seen[256] = {0};
            int valid = 1;
            for (int k = i; k <= j; k++) {
                if (seen[arr[k]]) {
                    valid = 0;
                    break;
                }
                seen[arr[k]] = 1;
                count++;
            }
            if (valid) {
                if (count > maxLen) {
                    maxLen = count;
                }
            }
        }
    }
    return maxLen;
}