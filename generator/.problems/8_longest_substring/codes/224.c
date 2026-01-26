int solve_student(char *arr, int len) {
    int max_len = 0;
    for (int i = 0; i < len; i++) {
        int current_len = 1;
        for (int j = i + 1; j < len; j++) {
            if (arr[i] != arr[j]) {
                current_len++;
            } else {
                break;
            }
        }
        max_len = max(max_len, current_len);
    }
    return max_len;
}