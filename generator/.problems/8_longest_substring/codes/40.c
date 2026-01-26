int solve_student(char *arr, int len) {
    int n = 0;
    for (int i = 0; i < len; i++) {
        int count = 1;
        for (int j = i + 1; j < len; j++) {
            int found = 0;
            for (int k = i; k < j; k++) {
                if (arr[k] == arr[j]) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                count++;
            } else {
                break;
            }
        }
        if (count > n) {
            n = count;
        }
    }
    return n;
}