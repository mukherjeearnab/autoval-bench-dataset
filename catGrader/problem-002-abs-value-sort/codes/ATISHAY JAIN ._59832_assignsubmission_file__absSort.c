int *solve_student(int arr[], int n) {
    // Write solution here

    int *return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int *)malloc(n * sizeof(int));
    freq = (int *)calloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            freq[(-1) * (arr[i])]++;
        } else {
            freq[arr[i]]++;
        }
    }

    idx = 0;
    for (int i = 0; i < 10001; i++) {
        while (freq[i] > 0) {
            return_array[idx++] = i;
        }
    }

    return return_array;
}