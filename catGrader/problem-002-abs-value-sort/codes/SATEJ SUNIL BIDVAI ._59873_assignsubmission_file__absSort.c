int *solve_student(int arr[], int n) {
    int *return_array;
    return_array = (int *)malloc(n * sizeof(int));

    int index = n - 1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0) {
            index = i;
            break;
        }
    }

    int i = index, j = index - 1;

    int t = 0;
    while (1) {
        if (i < n && abs(arr[i]) < abs(arr[j])) {
            return_array[t++] = abs(arr[i]);
            ++i;
        } else if (j >= 0 && abs(arr[j]) <= abs(arr[i])) {
            return_array[t++] = abs(arr[j]);
            --j;
        } else if (i < n) {
            return_array[t++] = abs(arr[i]);
            ++i;
        } else if (j >= 0) {
            return_array[t++] = abs(arr[j]);
            --j;
        } else
            break;
    }

    return return_array;
}