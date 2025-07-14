

int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int freq[100001];
    for (int i = 0; i < 100001; i++)
        freq[i] = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            freq[arr[i] * -1]++;
        else
            freq[arr[i]]++;
    }
    int j = 0;

    for (int i = 0; i < 100001; i++) {
        while (freq[i]--) {
            return_array[j++] = i;
        }
    }

    return return_array;
}
