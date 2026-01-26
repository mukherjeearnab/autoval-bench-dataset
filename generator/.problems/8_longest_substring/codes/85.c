int solve_student(char *arr, int len) {
    if (len == 0) return 0;
    int max_len = 1;
    int i = 0, j = 0;
    int seen[256] = {0};
    seen[arr[0]] = 1;
    while (j < len - 1) {
        int flag = 0;
        for (int k = i + 1; k <= j; k++) {
            if (arr[k] == arr[j + 1]) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            i++;
        } else {
            max_len = (max_len > j - i + 1) ? max_len : j - i + 1;
        }
        j++;
    }
    return max_len;
}