void sortfucntion(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int *solve_student(int arr[], int n) {
    // Write solution here

    int *return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        return_array[i] = abs(arr[i]);
    }
    sortfucntion(return_array, n);

    return return_array;
}