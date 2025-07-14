int* solve_student(int arr[], int n) {
    // Write solution here
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (abs(arr[j]) < abs(arr[min_idx]))
                min_idx = j;

        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
    for (int x = 0; x < n; x++) {
        arr[x] = abs(arr[x]);
    }
    return arr;
}

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}