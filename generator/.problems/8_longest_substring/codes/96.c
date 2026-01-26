int solve_student(char *arr, int len) {
    int n = 0;
    int max_len = 0;
    int char_index[256];
    for (int i = 0; i < 256; i++) {
        char_index[i] = -1;
    }
    for (int i = 0; i < len; i++) {
        int c = arr[i];
        if (char_index[c] >= n) {
            n = char_index[c] + 1;
        }
        char_index[c] = i;
        if (i - n + 1 > max_len) {
            max_len = i - n + 1;
        }
    }
    return max_len;
}