int solve_student(char *arr, int len) {
    int n = 0;
    int start = 0;
    int freq[256] = {0};
    for (int i = 0; i < len; i++) {
        if (freq[arr[i]] != 0 && freq[arr[i]] > start) {
            start = freq[arr[i]];
        }
        freq[arr[i]] = i + 1;
        int current_len = i - start + 1;
        if (current_len > n) {
            n = current_len;
        }
    }
    return n;
}