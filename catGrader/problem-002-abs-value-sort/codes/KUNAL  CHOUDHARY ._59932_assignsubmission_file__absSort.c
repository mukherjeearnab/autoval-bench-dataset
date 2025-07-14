int* solve_student(int arr[], int n) {
    // Write solution here
    int indx = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            indx = i;
            break;
        }
    }
    if (indx == 0) {
        return arr;
    }
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    if (indx == n) {
        for (int i = 0; i < n; i++) {
            return_array[i] = arr[n - i - 1];
        }
    }
    int neg = indx - 1;
    int ptr = 0;
    while (neg >= 0 || indx < n) {
        if (neg < 0) {
            return_array[ptr] = arr[indx];
            ptr++;
            indx++;
            continue;
        }
        if (indx == n) {
            return_array[ptr] = -1 * arr[neg];
            ptr++;
            neg--;
            continue;
        }
        if (arr[indx] > -1 * arr[neg]) {
            return_array[ptr] = arr[indx];
            ptr++;
            indx++;
            continue;
        }
        return_array[ptr] = -1 * arr[neg];
        ptr++;
        neg--;
    }
    return return_array;
}