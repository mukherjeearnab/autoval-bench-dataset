int solve_student(char *arr, int len) {
    int max_len = 0;
    int start = 0;
    int i = 0;
    while (i < len) {
        if (arr[i] == arr[start]) {
            start = i + 1;
        }
        max_len = max(max_len, i - start + 1);
        i++;
    }
    return max_len;
}