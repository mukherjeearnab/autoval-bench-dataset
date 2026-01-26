int solve_student(char *arr, int len) {
    int maxLength = 0;
    int currentLength = 0;
    int charIndex[256];
    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }
    for (int i = 0; i < len; i++) {
        if (charIndex[arr[i]] >= 0 && charIndex[arr[i]] >= 0) {
            currentLength = i - charIndex[arr[i]];
        }
        else{
            currentLength++;
        }
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
        charIndex[arr[i]] = i;
    }
    return maxLength;
}