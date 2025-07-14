void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

void sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int *solve_student(int arr[], int n) {
    // Write solution here
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            arr[i] *= -1;
    }

    sort(arr, n);

    return arr;

    // int *return_array;
    // Uncomment the following line and replace n with size of array
    // return_array = (int*)malloc(n*sizeof(int));
    // return return_array;
}