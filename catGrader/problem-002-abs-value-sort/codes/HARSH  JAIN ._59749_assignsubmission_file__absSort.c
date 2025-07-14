int* solve_student(int arr[], int n) {
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    // Write solution here
    int i = 0;
    int j = n - 1;
    int k = n - 1;
    while (j > i) {
        a = (arr[i] > 0) ? arr[i] : -1 * arr[i];
        b = (arr[j] > 0) ? arr[j] : -1 * arr[j];

        if (a > b) {
            *(return_array + k) = a;
            i++;
        } else {
            *(return_array + k) = b;
            j--;
        }
        k--;
    }
    return return_array;
}
