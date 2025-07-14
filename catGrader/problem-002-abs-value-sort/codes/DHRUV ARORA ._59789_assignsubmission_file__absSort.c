

int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            return_array[i] = arr[i];
        } else {
            return_array[i] = -1 * arr[i];
        }
    }
    int k, j, i;
    for (i = 1; i <= n - 1; i++) {
        j = i;
        while (j > 0 && return_array[j - 1] > return_array[j]) {
            k = return_array[j];
            return_array[j] = return_array[j - 1];
            return_array[j - 1] = k;
            j--;
        }
    }
    return return_array;
}
