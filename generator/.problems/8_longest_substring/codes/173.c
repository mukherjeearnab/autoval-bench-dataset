int solve_student(char *arr, int len) {
    int n = len;
    int longest = 0;
    for (int i = 0; i < n; i++) {
        int seen[256] = {0};
        int current_len = 0;
        for (int j = i; j < n; j++) {
            if (seen[arr[j]])
                break;
            seen[arr[j]] = 1;
            current_len++;
        }
        longest = max(longest, current_len);
    }
    return longest;
}