int solve_student(char *arr, int len) {
    int max_len = 0;
    int i = 0;
    int j = 0;
    int seen[256] = {0};
    while (i < len) {
        if (seen[arr[i]]) {
            while (arr[j] != arr[i]) {
                seen[arr[j]] = 0;
                j++;
            }
            seen[arr[j]] = 0;
            j++;
        }
        seen[arr[i]] = 1;
        max_len = (max_len > (i - j + 1)) ? max_len : (i - j + 1);
        i++;
    }
    return max_len;
}