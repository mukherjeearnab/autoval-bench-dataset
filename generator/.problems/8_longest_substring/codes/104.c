int solve_student(char *arr, int len) {
    int max_length = 0;
    for (int i = 0; i < len; i++) {
        int j = i;
        int seen[256] = {0};
        while (j < len) {
            if (seen[arr[j]]) {
                break;
            }
            seen[arr[j]] = 1;
            max_length = (max_length > (j - i + 1)) ? max_length : (j - i + 1);
            j++;
        }
    }
    return max_length;
}