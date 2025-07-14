int* solve_student(int arr[], int n) {
    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
        if (arr[i] < 0) return_array[i] *= -1;
    }
    mergeSort(arr, 0, n);
    return return_array;
}

void merge(int arr[], int l, int m, int r) {
    int i, j, k = l;
    i = j = 0;
    int s1 = m - l + 1;
    int s2 = r - m;
    int L[s1], R[s2];

    for (i = 0; i < s1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < s2; j++)
        R[j] = arr[m + 1 + j];

    while (i < s1 && j < s2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < s1) arr[k++] = L[i++];

    while (j < s2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
