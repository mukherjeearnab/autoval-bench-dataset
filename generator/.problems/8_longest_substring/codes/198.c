int solve_student(char *arr, int len) {
    int max_len = 0;
    for (int i = 0; i < len; i++) {
        int current_len = 0;
        for (int j = i; j < len; j++) {
            int k = i;
            while (k < j) {
                if (arr[k] == arr[j]) {
                    break;
                }
                k++;
            }
            if (k == j) {
                current_len++;
            }
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    return max_len;
}