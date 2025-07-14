void merge(int arr[], int start, int mid, int end) {
    int l1 = mid - start + 1;
    int l2 = end - mid;

    int L[l1], R[l2];

    for (int i = 0; i < l1; i++) {
        L[i] = arr[start + i];
    }
    for (int i = 0; i < l2; i++) {
        R[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = start;
    while (i < l1 && j < l2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < l1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < l2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = start + (end - start) / 2;

        // Sort first and second halves
        mergeSort(arr, start, m);
        mergeSort(arr, m + 1, end);

        merge(arr, start, m, end);
    }
}

int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        return_array[i] = abs(arr[i]);
    }

    mergeSort(return_array, 0, n);

    return return_array;
}