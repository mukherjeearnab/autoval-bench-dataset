int solve_student(char *arr, int len) {
    int n = 0;
    int i, j;
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            int seen[256] = {0};
            int k;
            for (k = i; k <= j; k++) {
                if (seen[arr[k]]) {
                    break;
                }
                seen[arr[k]] = 1;
            }
            if (k == j + 1) {
                n = (n > (j - i + 1)) ? n : (j - i + 1);
            }
        }
    }
    return n;
}