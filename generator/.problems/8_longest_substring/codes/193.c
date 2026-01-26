int solve_student(char *arr, int len) {
    int max_len = 0;
    int i = 0;
    int current_len = 0;
    while (i < len) {
        if (arr[i] == arr[i + 1]) {
            current_len = 0;
        } else {
            current_len++;
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
        i++;
    }
    return max_len + 1;
}