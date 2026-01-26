int solve_student(char *arr, int len) {
    int max_len = 0;
    int start = 0;
    int i, j;
    int seen[256];
    for (i = 0; i < 256; i++) seen[i] = -1;

    for (i = 0; i < len; i++) {
        if (seen[arr[i]] >= start) {
            start = seen[arr[i]] + 1;
        }
        seen[arr[i]] = i;
        max_len = max(max_len, i - start + 1);
    }
    return max_len;
}