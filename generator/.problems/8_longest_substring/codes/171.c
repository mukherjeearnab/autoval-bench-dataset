int solve_student(char *arr, int len) {
    int max_len = 0;
    int start = 0;
    int i = 0;
    int char_index[256];
    for (i = 0; i < 256; i++)
        char_index[i] = -1;

    while (i < len)
    {
        if (char_index[arr[i]] >= start)
        {
            start = char_index[arr[i]] + 1;
        }
        char_index[arr[i]] = i;
        max_len = max(max_len, i - start + 1);
        i++;
    }
    return max_len;
}