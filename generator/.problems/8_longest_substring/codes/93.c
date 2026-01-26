int solve_student(char *arr, int len) {
    int max_len = 0;
    int current_len = 0;
    int start = 0;
    int char_map[256] = {0};
    for (int i = 0; i < len; i++) {
        if (char_map[arr[i]] != 0 && char_map[arr[i]] > start) {
            start = char_map[arr[i]];
        }
        char_map[arr[i]] = i + 1;
        current_len = i - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    return max_len;
}