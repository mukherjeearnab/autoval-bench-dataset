int solve_student(char *arr, int len) {
    int n = len;
    int max_len = 0;
    for (int i = 0; i < n; i++) {
        int current_len = 0;
        int s[256] = {0};
        for (int j = i; j < n; j++) {
            if (s[arr[j]] == 0) {
                s[arr[j]] = 1;
                current_len++;
            } else {
                break;
            }
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    return max_len;
}