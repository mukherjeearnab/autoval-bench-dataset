int* solve_student(int arr[], int n) {
    // Write solution here

    // comparison function

    int cmpfunc(const void* a, const void* b) {
        return (abs(*(int*)a) - abs(*(int*)b));
    }

    qsort(arr, n, sizeof(int), cmpfunc);

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    return return_array;
}
