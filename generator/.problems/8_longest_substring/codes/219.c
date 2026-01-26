int solve_student(char *arr, int len) {
    int max_len = 0;
    int i = 0;
    while (i < len) {
        int j = 0;
        int current_len = 0;
        while (j < len) {
            if (arr[i] == arr[j]) {
                break;
            }
            current_len++;
            j++;
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
        i++;
    }
    return max_len;
}