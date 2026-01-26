int solve_student(char *arr, int len) {
    int maxlen = 0;
    int start = 0;
    int end = 0;
    int used[256] = {0};
    while (end < len) {
        if (used[arr[end]]) {
            while (arr[start] != arr[end]) {
                used[arr[start]] = 0;
                start++;
            }
            used[arr[start]] = 0;
            start++;
        }
        used[arr[end]] = 1;
        maxlen = (end - start + 1) > maxlen ? (end - start + 1) : maxlen;
        end++;
    }
    return maxlen;
}