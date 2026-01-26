int solve_student(char *arr, int len) {
    int maxLength = 0;
    for (int i = 0; i < len; i++) {
        int currentLength = 0;
        int found = 0;
        for (int j = i; j < len; j++) {
            for (int k = i; k < j; k++) {
                if (arr[k] == arr[j]) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                break;
            }
            currentLength++;
        }
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    return maxLength;
}