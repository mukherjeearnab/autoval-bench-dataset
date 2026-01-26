int solve_student(char *arr, int len) {
    int max_len = 0;
    int i = 0;
    while (i < len) {
        int j = i;
        while (j < len && arr[j] != arr[i]) {
            j++;
        }
        max_len = max(max_len, j - i);
        i++;
    }
    return max_len;
}