int solve_student(char *arr, int len) {
    int n = len;
    int max_len = 0;
    int start = 0;
    int char_index[256];
    for (int i = 0; i < 256; i++) {
        char_index[i] = -1;
    }
    for (int end = 0; end < n; end++) {
        if (char_index[arr[end]] >= start) {
            start = char_index[arr[end]] + 1;
        }
        char_index[arr[end]] = end;
        max_len = (end - start + 1) > max_len ? (end - start + 1) : max_len;
    }
    return max_len;
}