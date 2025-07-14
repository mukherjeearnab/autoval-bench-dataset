int *solve_student(int arr[], int n) {
    // Write solution here

    int *return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int *)malloc(n * sizeof(int));
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        int mint = arr[i];
        int minpos = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                min = arr[j];
                minpos = j;
            }
        }
        int temp = min;
        arr[minpos] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
    }
    return return_array;
}