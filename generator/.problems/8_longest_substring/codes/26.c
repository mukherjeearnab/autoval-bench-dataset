int solve_student(char *arr, int len) {
    int n = 0;
    int i = 0;
    int j = 0;
    int max_len = 0;
    int char_index[256];
    for (int k = 0; k < 256; k++) {
        char_index[k] = -1;
    }
    while (i < len) {
        if (char_index[arr[i]] != -1 && char_index[arr[i]] >= j) {
            j = char_index[arr[i]] + 1;
        }
        char_index[arr[i]] = i;
        n = i - j + 1;
        if (n > max_len) {
            max_len = n;
        }
        i++;
    }
    return max_len;
}