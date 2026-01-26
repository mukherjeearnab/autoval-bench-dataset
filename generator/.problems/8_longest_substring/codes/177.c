int solve_student(char *arr, int len) {
    int n = len;
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] != arr[j])
                count++;
            else
                break;
        }
        if (count > maxLength)
            maxLength = count;
    }
    return maxLength
}