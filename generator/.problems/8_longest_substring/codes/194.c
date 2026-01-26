int solve_student(char *arr, int len) {
    int max_len = 0;
    int i = 0;
    int current_len = 0;
    while (i < len) {
        current_len++;
        int j = 0;
        while (j < i) {
            if (arr[i] == arr[j]) {
                current_len = 0;
                break;
            }
            j++;
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
        i++;
    }
    return max_len;
}