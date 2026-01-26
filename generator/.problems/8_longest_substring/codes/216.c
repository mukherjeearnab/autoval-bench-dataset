int solve_student(char *arr, int len) {
    int max_len = 0;
    int current_len = 0;
    int i = 0;
    while (i < len) {
        int j = i + 1;
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
        current_len = 0;
        i++;
    }
    return max_len;
}