int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int i = 0, j = n - 1;
    int k = n - 1;
    while (i <= j && k >= 0) {
        if (abs(arr[i]) > abs(arr[j])) {
            return_array[k] = abs(arr[i]);
            i++;
        } else {
            return_array[k] = abs(arr[j]);
            j--;
        }
        k--;
    }
    return return_array;
}
