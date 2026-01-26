int solve_student(char *arr, int len) {
    int max_length = 0;
    int current_length = 0;
    int char_index[256];
    for (int i = 0; i < 256; i++) {
        char_index[i] = -1;
    }
    for (int i = 0; i < len; i++) {
        if (char_index[arr[i]] != -1 && char_index[arr[i]] >= 0) {
            current_length = i - char_index[arr[i]];
        } else {
            current_length++;
        }
        max_length = (max_length > current_length) ? max_length : current_length;
        char_index[arr[i]] = i;
    }
    return max_length;
}