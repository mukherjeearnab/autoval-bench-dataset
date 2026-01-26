int solve_student(char* arr, int len) {
    int maxLen = 0;
    int i, j;
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            int duplicate = 0;
            for (int k = i; k < j; k++) {
                if (arr[k] = arr[j]){
                    duplicate = 1;
                    break;
                }
            }
            if (!duplicate) {
                int lenSub = j - i + 1;
                if (lenSub > maxLen) {
                    maxLen = lenSub;
                }
            }
        }
    }
    return maxLen;
}