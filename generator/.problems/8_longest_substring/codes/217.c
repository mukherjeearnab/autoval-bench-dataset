int solve_student(char *arr, int len) {
    int max_len = 0;
    int start = 0;
    int end = 0;
    while (end < len) {
        int i = start;
        while (i < end) {
            if (arr[i] == arr[end]) {
                start = i + 1;
            }
            i++;
        }
        max_len = (max_len > (end - start + 1)) ? max_len : (end - start + 1);
        end++;
    }
    return max_len;
}