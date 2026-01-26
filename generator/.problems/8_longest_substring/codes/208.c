int solve_student(char *arr, int len) {
    int max_len = 0;
    int current_len = 0;
    char seen[len];
    int seen_count = 0;
    for (int i = 0; i < len; i++) {
        bool found = false;
        for (int j = 0; j < seen_count; j++) {
            if (arr[i] == seen[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            seen[seen_count] = arr[i];
            seen_count++;
            current_len++;
            max_len = max(max_len, current_len);
        } else {
            current_len = 0;
        }
    }
    return max_len;
}