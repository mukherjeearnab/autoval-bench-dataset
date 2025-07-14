int *solve_student(int arr[], int n) {
    // Write solution here
    int *return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int *)malloc(n * sizeof(int));
    int cmpfunc(const void *a, const void *b) {
        return (*(int *)a - *(int *)b);
    }
    for (int i = 0; i < n; i++) {
        if (vec[i] < 0)
            vec[i] = vec[i] * (-1);
    }
    qsort(vec, n, sizeof(int), cmpfunc);
    return_array = vec;
    return return_array;
}