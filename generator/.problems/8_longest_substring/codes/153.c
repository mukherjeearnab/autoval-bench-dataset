int solve_student(char *arr, int len) {
    int max_len = 0;
    int current_len = 0;
    int start = 0;
    int char_index[256];
    for (int i = 0; i < 256; i++) {
        char_index[i] = -1;
    }
    for (int i = 0; i < len; i++) {
        int char_code = (int)arr[i];
        if (char_index[char_code] >= start) {
            start = char_index[char_code] + 1;
        }
        char_index[char_code] = i;
        current_len = i - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    return max_len;
}