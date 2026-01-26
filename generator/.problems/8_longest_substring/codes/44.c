int solve_student(char *arr, int len) {
    int max_len = 0;
    for (int i = 0; i < len; i++) {
        int count = 0;
        int freq[256] = {0};
        for (int j = i; j < len; j++) {
            if (freq[arr[j]] == 0) {
                freq[arr[j]] = 1;
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