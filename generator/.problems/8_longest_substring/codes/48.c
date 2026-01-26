int solve_student(char *arr, int len) {
    int max_length = 0;
    int start = 0;
    int char_map[256];
    for (int i = 0; i < 256; i++) {
        char_map[i] = -1;
    }
    for (int i = 0; i < len; i++) {
        if (char_map[arr[i]] >= start) {
            start = char_map[arr[i]] + 1;
        }
        char_map[arr[i]] = i;
        int current_length = i - start + 1;
        if (current_length > max_length) {
            max_length = current_length;
        }
    }
    return max_length;
}