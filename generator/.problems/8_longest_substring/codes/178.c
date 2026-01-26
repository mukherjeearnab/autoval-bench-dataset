int solve_student(char *arr, int len) {
    int max_len = 0;
    int current_len = 0;
    int start = 0;
    int char_index[256];
    for (int i = 0; i < 256; i++) {
        char_index[i] = -1;
    }
    for (int i = 0; i < len; i++) {
        if (char_index[arr[i]] >= start) {
            start = char_index[arr[i]] + 1;
        }
        char_index[arr[i]] = i;
        max_len = (i - start + 1) > max_len ? (i - start + 1) : max_len;
    }
    return max_len
}