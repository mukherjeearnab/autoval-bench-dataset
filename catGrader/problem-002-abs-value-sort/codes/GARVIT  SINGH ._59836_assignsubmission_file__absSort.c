int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array = (int*)malloc(n * sizeof(int));

    // Uncomment the following line and replace n with size of array
    // return_array = (int*)malloc(n*sizeof(int));

    int i = 0;
    while (i < n && arr[i] < 0)
        i++;
    int k = 0;
    int p = i - 1, q = i;
    while (p >= 0 && q < n) {
        if (-1 * arr[p] >= arr[q]) {
            // put q
            return_array[k] = arr[q];
            q++;
        } else {
            // put p
            return_array[k] = -1 * arr[p];
            p--;
        }
        k++;
    }
    while (p >= 0) {
        return_array[k] = -1 * arr[p];
        k++;
        p--;
    }
    while (q < n) {
        return_array[k] = arr[q];
        q++;
        k++;
    }

    return return_array;
}