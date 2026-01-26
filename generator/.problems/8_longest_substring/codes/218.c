int solve_student(char *arr, int len) {
    int max_len = 0;
    for (int i = 0; i < len; i++) {
        int current_len = 0;
        for (int j = i; j < len; j++) {
            int duplicate = 0;
            for (int k = i; k < j; k++) {
                if (arr[k] == arr[j]) {
                    duplicate = 1;
                    break;
                }
            }
            if (duplicate == 0) {
                current_len++;
            } else {
                break;
            }
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    return max_len;
}