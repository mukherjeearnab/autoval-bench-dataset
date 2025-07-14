int* solve_student(int arr[], int n) {
    int* return_array;
    int freq[10000] = {0};
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int i, j = 0;
    for (i = 0; i < n; i++) {
        freq[abs(arr[i])]++;
    }
    for (i = 0; i < 10000; i++) {
        while (freq[i] != 0) {
            return_array[j] = i;
            freq[i]--;
            j++;
        }
    }
    return return_array;
}