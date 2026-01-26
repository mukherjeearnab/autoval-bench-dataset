int solve_student(char *arr, int len) {
    if (len == 0) return 0;
    int max_len = 1;
    int i = 0;
    int j = 0;
    int seen[256] = {0};
    seen[arr[0]] = 1;
    while (j < len - 1) {
        int found = 0;
        for (int k = 0; k < 256; k++) {
            if (arr[j + 1] == arr[k] && seen[k]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            j++;
            seen[arr[j]] = 1;
            int current_len = j - i + 1;
            if (current_len > max_len) {
                max_len = current_len;
            }
        } else {
            i++;
            seen[arr[i]] = 0;
        }
    }
    return max_len;
}