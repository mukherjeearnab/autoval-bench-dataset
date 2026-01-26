int solve_student(char *arr, int len) {
    int n = len;
    int max_len = 0;
    int start = 0;
    int char_index[256];
    for (int i = 0; i < 256; i++) {
        char_index[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        if (char_index[arr[i]] >= start) {
            start = char_index[arr[i]] + 1;
        }
        char_index[arr[i]] = i;
        int current_len = i - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    return max_len;
}