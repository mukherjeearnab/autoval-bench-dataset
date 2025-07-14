void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int *solve_student(int arr[], int n) {
    // Write solution here
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            arr[i] = abs(arr[i]);
    }
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }

    int *return_array;
    return_array = arr;
    // Uncomment the following line and replace n with size of array
    // return_array = (int*)malloc(n*sizeof(int));
    return return_array;
}