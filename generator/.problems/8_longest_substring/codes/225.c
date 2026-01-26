int solve_student(char *arr, int len) {
    int max_len = 0;
    int i = 0;
    int j = 0;
    while (i < len) {
        if (j < len && arr[i] != arr[j]) {
            j++;
        } else {
            max_len = max(max_len, j - i + 1);
            i++;
        }
    }
    return max_len;
}