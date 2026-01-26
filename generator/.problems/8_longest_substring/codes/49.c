int solve_student(char *arr, int len) {
    int maxLen = 0;
    int i = 0;
    int j = 0;
    int charIndex[256] = {0};
    while (i < len) {
        if (charIndex[arr[i]] != 0) {
            while (arr[j] != arr[i]) {
                charIndex[arr[j]] = 0;
                j++;
            }
            j++;
        }
        charIndex[arr[i]] = 1;
        maxLen = maxLen > (i - j + 1) ? maxLen : (i - j + 1);
        i++;
    }
    return maxLen;
}