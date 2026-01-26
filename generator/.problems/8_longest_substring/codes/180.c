int solve_student(char *arr, int len) {
    int i, j, max_length;
    max_length = 0;
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            int unique = 1;
            for (int k = i; k < j; k++) {
                if (arr[k] == arr[j]) {
                    unique = 0;
                    break;
                }
            }
            if (unique) {
                max_length = (j - i + 1) > max_length ? (j - i + 1) : max_length;
            }
        }
    }
    return max_length
}