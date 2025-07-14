int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int lo = 0, hi = n - 1, curr = n - 1;
    while (lo < hi) {
        int i, j;
        if (arr[lo] < 0) {
            i = 0 - arr[lo];
        }
        if (arr[hi] < 0) {
            j = 0 - arr[hi];
        }

        if (i >= j) {
            return_array[curr] = i;
            lo++;
        } else {
            return_array[curr] = j;
            hi--;
        }

        curr--;
    }

    if (lo == hi && curr > 0) {
        return_array[curr] = arr[lo];
    }

    return return_array;
}