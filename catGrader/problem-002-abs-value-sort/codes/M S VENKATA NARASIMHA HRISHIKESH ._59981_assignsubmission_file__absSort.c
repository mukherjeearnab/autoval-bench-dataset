int* solve_student(int arr[], int n) {
    int* return_array;

    return_array = (int*)malloc(n * sizeof(int));

    int b;
    for (b = 0; arr[b] < 0 && b < n; b++);

    int k = 0;
    int p = b - 1, q = b;
    while (p >= 0 && q < n) {
        if (-1 * arr[p] >= arr[q]) {
            return_array[k] = arr[q];
            q++;
        } else {
            return_array[k] = -1 * arr[p];
            p--;
        }
        k++;
    }
    while (q < n) {
        return_array[k] = arr[q];
        q++;
        k++;
    }
    while (p >= 0) {
        return_array[k] = -1 * arr[p];
        k++;
        p--;
    }

    return return_array;
}