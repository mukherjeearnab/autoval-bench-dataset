int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    int* freq;
    freq = (int*)malloc(100000 * sizeof(int));
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = -1 * arr[i];
        }
        freq[arr[i]]++;
    }
    int ind = 0;
    for (i = 0; i < 100001; i++) {
        while (freq[i] > 0) {
            return_array[ind] = i;
            ind++;
            freq[i]--;
        }
    }
    // Uncomment the following line and replace n with size of array
    // return_array = (int*)malloc(n*sizeof(int));
    return return_array;
}
