int solve_student(char *arr, int len) {
    int max_len = 0;
    int start = 0;
    int end = 0;
    int used[256] = {0};
    while (end < len) {
        if (used[arr[end]] == 0) {
            used[arr[end]] = 1;
            max_len = (max_len > (end - start + 1)) ? max_len : (end - start + 1);
            end++;
        } else {
            used[arr[start]] = 0;
            start++;
        }
    }
    return max_len;
}