int solve_student(char *arr, int len) {
    int max_len = 0;
    int i = 0;
    int j = 0;
    while (i < len && j < len) {
        if (arr[i] == arr[j]) {
            max_len++;
        }
        i++;
        j++;
    }
    return max_len;
}