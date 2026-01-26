int solve_student(char *arr, int len) {
    int maxLen = 0;
    int currentStart = 0;
    int charMap[256] = {0};

    for (int i = 0; i < len; i++) {
        char currentChar = arr[i];
        if (charMap[currentChar] > currentStart) {
            currentStart = charMap[currentChar];
        }
        charMap[currentChar] = i;
        maxLen = max(maxLen, i - currentStart + 1)
    }
    return maxLen
}