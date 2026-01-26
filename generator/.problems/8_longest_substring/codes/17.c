int solve_student(char *arr, int len) {
    int start = 0;
    int end = 0;
    int max_len = 0;
    int char_map[256] = {0};
    while (end < len) {
        if (char_map[arr[end]]) {
            while (arr[start] != arr[end]) {
                char_map[arr[start]] = 0;
                start++;
            }
            start++;
        } else {
            char_map[arr[end]] = 1;
            int current_len = end - start + 1;
            if (current_len > max_len) {
                max_len = current_len;
            }
            end++;
        }
    }
    return max_len;
}