int solve_student(char *arr, int len) {
    int maxLength = 0;
    for (int i = 0; i < len; i++) {
        int currentLength = 0;
        int charSet[256] = {0};
        for (int j = i; j < len; j++) {
            if (charSet[arr[j]]) break;
            charSet[arr[j]] = 1;
            currentLength++;
        }
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    return maxLength;
}