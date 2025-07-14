int *solve_student(int arr[], int n) {
    // Write solution here

    int *return_array;
    return_array = (int *)malloc(n * sizeof(int));

    for (int k = 0; k < n; k++)
        arr[k] = abs(arr[k]);

    int num;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                num = arr[i];
                arr[i] = arr[j];
                arr[j] = num;
            }
        }
    }

    return_array = arr;
    // Uncomment the following line and replace n with size of array

    return return_array;
}