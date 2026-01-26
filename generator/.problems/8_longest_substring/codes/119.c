int solve_student(char *arr, int len) {
    int n = 0;
    int start = 0;
    int used[256] = {0};
    for (int i = 0; i < len; i++) {
        if (used[arr[i]]) {
            while (arr[start] != arr[i]) {
                used[arr[start]] = 0;
                start++;
            }
            start++;
        } else {
            int current_len = i - start + 1;
            if (current_len > n) {
                n = current_len;
            }
            used[arr[i]] = 1;
        }
    }
    return n;
}