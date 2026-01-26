int solve_student(char *arr, int len) {
    int maxLength = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            int uniqueChars = 0;
            int charCounts[256] = {0};
            int isUnique = 1;
            for (int k = i; k <= j; k++) {
                if (charCounts[arr[k]] > 0) {
                    isUnique = 0;
                    break;
                }
                charCounts[arr[k]]++;
                uniqueChars++;
            }
            if (isUnique) {
                if (uniqueChars > maxLength) {
                    maxLength = uniqueChars;
                }
            }
        }
    }
    return maxLength;
}