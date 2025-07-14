int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int i = 0, l = 0, r = n - 1;
    if (arr[r] <= 0) {
        return_array[i] = arr[r];
        i++;
        r--;
    } else if (arr[l] > 0) {
        return_array[i] = arr[l];
        i++;
        l++;
    } else {
        for (int i = 0; i < n; i++) {
            if (arr[l] < 0 && arr[r] - arr[l] < 0) {
                return_array[i]
            }
        }
    }
    return return_array;
}