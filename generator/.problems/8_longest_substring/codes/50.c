int solve_student(char *arr, int len) {
    if (len == 0) return 0;
    int max_len = 1;
    int current_len = 1;
    for (int i = 1; i < len; i++) {
        if (arr[i] != arr[i - 1]) {
            current_len++;
        } else {
            current_len = 1;
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    return max_len;
}