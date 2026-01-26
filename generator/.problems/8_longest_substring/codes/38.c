int solve_student(char *arr, int len) {
    int max_len = 0;
    for (int i = 0; i < len; i++) {
        int seen[256] = {0};
        int current_len = 0;
        for (int j = i; j < len; j++) {
            if (seen[arr[j]]) {
                break;
            }
            seen[arr[j]] = 1;
            current_len++;
            if (current_len > max_len) {
                max_len = current_len;
            }
        }
    }
    return max_len;
}