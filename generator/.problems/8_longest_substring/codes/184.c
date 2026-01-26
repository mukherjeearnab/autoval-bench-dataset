int solve_student(char *arr, int len) {
    int n = len;
    int maxLen = 0;
    int start = 0;
    int end = 0;
    int charIndex[256];
    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }
    while (end < n) {
        if (charIndex[arr[end]] != -1 && charIndex[arr[end]] >= start) {
            start = charIndex[arr[end]] + 1;
        }
        charIndex[arr[end]] = end;
        maxLen = max(maxLen, end - start + 1);
        end++;
    }
    return maxLen
}