int solve_student(int n) {
    if (n <= 0) return 0;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    if (sum == 1) return 1;
    if (sum == 4) return 0;
    int arr[1000];
    int size = 0;
    arr[size++] = sum;
    while (sum != 1 && sum != 4) {
        int new_sum = 0;
        while (sum > 0) {
            int digit = sum % 10;
            new_sum += digit * digit;
            sum /= 10;
        }
        int found = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == new_sum) {
                found = 1;
                break;
            }
        }
        if (found) return 0;
        arr[size++] = new_sum;
        sum = new_sum;
    }
    return (sum == 1) ? 1 : 0;
}