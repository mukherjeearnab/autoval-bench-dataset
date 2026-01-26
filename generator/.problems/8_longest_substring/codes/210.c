int solve_student(char *arr, int len) {
    int max_len = 0;
    int start = 0;
    for (int i = 0; i < len; i++) {
        bool found = false;
        for (int j = start; j < i; j++) {
            if (arr[i] == arr[j]) {
                found = true;
                start = j + 1;
                break;
            }
        }
        max_len = max(max_len, i - start + 1);
    }
    return max_len;
}