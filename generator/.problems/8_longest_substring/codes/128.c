int solve_student(char *arr, int len) {
    int max_len = 0;
    int i = 0;
    while (i < len) {
        int j = i;
        int count = 0;
        int chars[256] = {0};
        while (j < len) {
            if (chars[arr[j]]) break;
            chars[arr[j]] = 1;
            count++;
            j++;
        }
        if (count > max_len) {
            max_len = count;
        }
        i++;
    }
    return max_len;
}