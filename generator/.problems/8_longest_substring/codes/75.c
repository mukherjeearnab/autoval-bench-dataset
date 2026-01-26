int solve_student(char *arr, int len) {
    int n = 0;
    int max = 0;
    int start = 0;
    int char_index[256];
    for (int i = 0; i < 256; i++) {
        char_index[i] = -1;
    }
    for (int i = 0; i < len; i++) {
        int c = arr[i];
        if (char_index[c] >= start) {
            start = char_index[c] + 1;
        }
        char_index[c] = i;
        n = i - start + 1;
        if (n > max) {
            max = n;
        }
    }
    return max;
}