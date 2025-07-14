void sS(int arr[], int n) {
    int i, j, mi;
    for (i = 0; i < n - 1; i++) {
        mi = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[mi])
                mi = j;
        }
        swap(&arr[mi], &arr[i]);
    }
}

int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array = arr;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++) {
        *return_array = abs(*return_array);
        return_array++;
    }

    sS(return_array);

    return return_array;
}