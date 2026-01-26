int solve_student(char *arr, int len) {
    int maxLen = 0;
    int i, j;
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            int current_len = j - i + 1;
            int hasDuplicate = false;
            for (int k = i; k <= j; k++) {
                for (int l = k + 1; l <= j; l++) {
                    if (arr[k] == arr[l]) {
                        hasDuplicate = true;
                        break;
                    }
                }
                if(hasDuplicate) break;
            }
            if (!hasDuplicate) {
                if (current_len > maxLen)
                    maxLen = current_len;
            }
        }
    }
    return maxLen;
}