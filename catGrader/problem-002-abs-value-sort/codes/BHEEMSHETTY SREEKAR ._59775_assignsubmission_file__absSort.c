int compar(int a, int b) {
    return (a < b);
}

int *solve_student(int arr[], int n) {
    // Write solution here

    int *return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int *)malloc(n * sizeof(int));

    for (int i = n - 1; i >= 0; i--) {
        return_array[i] = abs(arr[i]);
    }
    qsort(return_array, n, sizeof(int), compar);

    return return_array;
}
