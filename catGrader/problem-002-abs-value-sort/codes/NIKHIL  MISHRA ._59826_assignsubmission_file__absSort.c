int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    // return_array = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            return_array[i] = -arr[i];
        else
            return_array[i] = arr[i];
    }
    qsort(return_array, n, sizeof(int), cmp);
    return return_array;
}
int cmp(const void* a, const void* b) {
    return ((int)a - *(int*)b);
}