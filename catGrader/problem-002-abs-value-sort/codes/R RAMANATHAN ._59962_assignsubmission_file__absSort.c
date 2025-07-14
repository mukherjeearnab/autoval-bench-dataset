int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int lo = 0, hi = n - 1;
    int i = n - 1;
    while (i >= 0) {
        if (arr[lo] * arr[lo] <= arr[hi] * arr[hi]) {
            return_array[i] = arr[hi] > 0 ? arr[hi] : -1 * arr[hi];
            hi--;
        } else {
            return_array[i] = arr[lo] > 0 ? arr[lo] : -1 * arr[lo];
            lo++;
        }
        i--;
    }
    return return_array;
}
