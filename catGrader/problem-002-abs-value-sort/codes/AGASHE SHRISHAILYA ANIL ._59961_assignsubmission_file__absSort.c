int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int l = 0, r = n - 1;
    int pt = 0;

    while (l != r) {
        if (l * l < r * r) {
            return_array[pt] = arr[l] * arr[l];
            pt++;
            l++;
        } else {
            return_array[pt] = arr[r] * arr[r];
            pt++;
            r--;
        }
    }

    return return_array;
}