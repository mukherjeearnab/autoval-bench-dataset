int solve_student(char *arr, int len) {
    int maxlen = 0;
    int start = 0;
    int end = 0;
    int char_index[256] = {0};

    while (end < len) {
        if (char_index[arr[end]] != 0) {
            start = char_index[arr[end]];
        }
        char_index[arr[end]] = end + 1;
        maxlen = max(maxlen, end - start + 1);
        end++;
    }
    return maxlen;
}