int solve_student(char *arr, int len) {
    int i, j, max_len = 0;
    for (i = 0; i < len; i++) {
        int count = 0;
        for (j = i; j < len; j++) {
            int found = 0;
            for (int k = i; k < j; k++) {
                if (arr[k] == arr[j]) {
                    found = 1;
                    break;
                }
            }
            if (found) break;
            count++;
        }
        if (count > max_len) {
            max_len = count;
        }
    }
    return max_len;
}