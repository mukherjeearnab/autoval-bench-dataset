int solve_student(char *arr, int len) {
    int n = 0;
    int i, j;
    for (i = 0; i < len; i++) {
        int count = 0;
        int chars[256] = {0};
        for (j = i; j < len; j++) {
            if (chars[arr[j]] == 1) {
                break;
            }
            chars[arr[j]] = 1;
            count++;
        }
        if (count > n) {
            n = count;
        }
    }
    return n;
}