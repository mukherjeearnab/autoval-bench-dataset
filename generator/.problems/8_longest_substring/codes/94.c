int solve_student(char *arr, int len) {
    int longest = 0;
    for (int i = 0; i < len; i++) {
        int current_len = 0;
        int seen[256] = {0};
        for (int j = i; j < len; j++) {
            if (seen[arr[j]]) {
                break;
            }
            seen[arr[j]] = 1;
            current_len++;
        }
        if (current_len > longest) {
            longest = current_len;
        }
    }
    return longest;
}