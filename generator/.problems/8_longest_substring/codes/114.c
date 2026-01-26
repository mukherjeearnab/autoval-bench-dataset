int solve_student(char *arr, int len) {
    int max_len = 0;
    int i = 0;
    int j = 0;
    int last_occurrence[256] = { -1 };
    while (i < len) {
        if (last_occurrence[arr[i]] >= j) {
            j = last_occurrence[arr[i]] + 1;
        }
        last_occurrence[arr[i]] = i;
        max_len = (i - j + 1) > max_len ? (i - j + 1) : max_len;
        i++;
    }
    return max_len;
}