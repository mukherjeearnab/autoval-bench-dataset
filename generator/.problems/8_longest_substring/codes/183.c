int solve_student(char *arr, int len) {
    int i, j, max_length = 0;
    for (i = 0; i < len; i++) {
        int current_length = 0;
        int char_set[256] = {0};
        for (j = i; j < len; j++) {
            if (char_set[arr[j]])
                break;
            char_set[arr[j]] = 1;
            current_length++;
        }
        if (current_length > max_length)
            max_length = current_length;
    }
    return max_length
}