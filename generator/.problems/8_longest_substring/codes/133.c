int solve_student(char *arr, int len) {
    int maxLength = 0;
    int currentLength = 0;
    int charSet[256] = {0};
    for (int i = 0; i < len; i++) {
        if (charSet[arr[i]] == 0) {
            currentLength++;
            charSet[arr[i]] = 1;
        } else {
            maxLength = (maxLength > currentLength) ? maxLength : currentLength;
            int j = 0;
            while (arr[j] != arr[i]) {
                charSet[arr[j]] = 0;
                j++;
            }
            currentLength = 0;
            for (int k = j; k <= i; k++) {
                currentLength++;
                charSet[arr[k]] = 1;
            }
        }
    }
    maxLength = (maxLength > currentLength) ? maxLength : currentLength;
    return maxLength;
}