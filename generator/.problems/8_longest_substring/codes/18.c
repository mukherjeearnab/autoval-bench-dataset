int solve_student(char *arr, int len) {
    int maxlen = 0;
    for (int i = 0; i < len; i++) {
        int j = i;
        int count = 0;
        int seen[256] = {0};
        while (j < len) {
            if (seen[arr[j]]) {
                break;
            }
            seen[arr[j]] = 1;
            count++;
            j++;
        }
        if (count > maxlen) {
            maxlen = count;
        }
    }
    return maxlen;
}