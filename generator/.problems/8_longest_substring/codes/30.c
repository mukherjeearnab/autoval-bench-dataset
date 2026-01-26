int solve_student(char *arr, int len) {
    int max_len = 0;
    int i = 0;
    int j = 0;
    int freq[256] = {0};
    while (i < len) {
        if (freq[arr[i]] > 0) {
            while (arr[j] != arr[i]) {
                freq[arr[j]]--;
                j++;
            }
            freq[arr[j]]--;
            j++;
        }
        freq[arr[i]]++;
        max_len = (max_len > (i - j + 1)) ? max_len : (i - j + 1);
        i++;
    }
    return max_len;
}