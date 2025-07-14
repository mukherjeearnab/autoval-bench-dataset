int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int i = 0, j = n - 1, k = 0;

    while (i <= j) {
        if (abs(arr[i]) > abs(arr[j])) {
            return_array[k] = abs(arr[j]);
            j--;
            k++;
        } else {
            return_array[k] = abs(arr[i]);
            i++;
            k++;
        }
    }
    return return_array;
}