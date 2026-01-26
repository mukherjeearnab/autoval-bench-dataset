int solve_student(char *arr, int len) {
    int maxLen = 0;
    for (int i = 0; i < len; i++) {
        int count = 0;
        for (int j = i; j < len; j++) {
            int found = 0;
            for (int k = i; k < j; k++) {
                if (arr[k] == arr[j]) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                break;
            } else {
                count++;
            }
        }
        if (count > maxLen) {
            maxLen = count;
        }
    }
    return maxLen;
}