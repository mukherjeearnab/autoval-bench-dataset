int solve_student(char *arr, int len) {
    int start = 0;
    int end = 0;
    int maxLen = 0;
    int charIndex[256] = {0};
    while (end < len) {
        if (charIndex[arr[end]] != 0) {
            start = (start > charIndex[arr[end]]) ? start : charIndex[arr[end]];
        }
        charIndex[arr[end]] = end + 1;
        maxLen = (maxLen > end - start + 1) ? maxLen : end - start + 1;
        end++;
    }
    return max_len;
}