int solve_student(char *arr, int len) {
    int n = len;
    int max_len = 0;
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            int found = 0;
            for (int k = i; k < j; k++) {
                if (arr[k] == arr[j]) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                count++;
            } else {
                break;
            }
        }
        if (count > max_len) {
            max_len = count;
        }
    }
    return max_len;
}