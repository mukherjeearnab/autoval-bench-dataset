int solve_student(char *arr, int len) {
    int max_len = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            int count = 0;
            for (int k = i; k <= j; k++) {
                count++;
            }
            bool duplicate = false;
            for (int k = 0; k < j; k++) {
                if (arr[k] == arr[j]) {
                    duplicate = true;
                    break;
                }
            }
            if (!duplicate) {
                max_len = max(max_len, count);
            }
        }
    }
    return max_len;
}